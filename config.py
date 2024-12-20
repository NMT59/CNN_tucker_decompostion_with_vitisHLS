#from models import VGG#
#model = VGG('VGG16')
from models import AlexNet
model = AlexNet()
# Params for training
learning_rate = 0.01
# Targeted approximation ration, calculated by the ratio between the Frobenius Norm of original tensor and recovered tensor
target_ratio_ = 0.89
# Default is pretrained VGG19. Set to '' if intend to use newly trained weights
#new_weight_path = "/content/CNN_compression_with_Tensor_Decomposition/trained_weights/AlexNet_weight_ckpt.pth"
#new_weight_path = "checkpoint/ckpt.pth"
new_weight_path = "checkpoint/alexnet_ckpt.pth"
# For Tucker decomposition, either input 'all' or a subset list from [3,7,10,14,17,20,23,27] to determine layers to decompose
layer_to_decomp_tucker = 'all'
# rank selection method for Tucker, choose from VBMF and SVD
tucker_rank_selection_method = 'SVD'

# Rank chosen from 'auto', 'full' or desired number for CP; has to match the length of layer_to_decomp if input with list
layer_to_decomp_cp = [3]
rank = 'auto'

# whether to add residual structure to the decomposed model; oroginally designed to account for
# possible gradient problem, but proven to be not successful.
res = False
fine_tune_epochs = 20 #

# used pretrained model to test accuracy
model_path = "decompose/alexnet_ckpt.pth"
#model_path = "decompose/alexnet_ckpt.pth"
