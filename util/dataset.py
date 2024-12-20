import torch
import torchvision
import torchvision.transforms as transforms
# Data
print('==> Preparing data..')
transform_train = transforms.Compose([
    #transforms.Resize((image_size, image_size)),
    transforms.RandomCrop(32, padding=4),
    transforms.RandomHorizontalFlip(),
    transforms.ToTensor(),
    transforms.Normalize((0.4914, 0.4822, 0.4465), (0.2023, 0.1994, 0.2010)),
])

transform_test = transforms.Compose([
    #transforms.Resize((image_size, image_size)),
    transforms.ToTensor(),
    transforms.Normalize((0.4914, 0.4822, 0.4465), (0.2023, 0.1994, 0.2010)),
])

trainset = torchvision.datasets.CIFAR10(
    root='./data', train=True, download=True, transform=transform_train)
trainloader = torch.utils.data.DataLoader(
    trainset, batch_size=128, shuffle=True, num_workers=2)

testset = torchvision.datasets.CIFAR10(
    root='./data', train=False, download=True, transform=transform_test)
testloader = torch.utils.data.DataLoader(
    testset, batch_size=100, shuffle=False, num_workers=2)

classes = ('plane', 'car', 'bird', 'cat', 'deer',
           'dog', 'frog', 'horse', 'ship', 'truck')
###########################################################
import torch
import torchvision
import torchvision.transforms as transforms

# Data
#print('==> Preparing data..')
#transform_train = transforms.Compose([
#    transforms.RandomHorizontalFlip(),     # Not necessary for MNIST, but can be kept
#    transforms.Resize((32, 32)),
#    transforms.ToTensor(),
#    transforms.Normalize((0.1307,), (0.3081,)),  # Mean and std deviation of MNIST dataset
#])

#transform_test = transforms.Compose([
#    transforms.Resize((32, 32)),
#    transforms.ToTensor(),
#    transforms.Normalize((0.1307,), (0.3081,)),
#])

#trainset = torchvision.datasets.MNIST(
#    root='./data', train=True, download=True, transform=transform_train)
#trainloader = torch.utils.data.DataLoader(
#    trainset, batch_size=128, shuffle=True, num_workers=2)

#testset = torchvision.datasets.MNIST(
#    root='./data', train=False, download=True, transform=transform_test)
#testloader = torch.utils.data.DataLoader(
#    testset, batch_size=100, shuffle=False, num_workers=2)

#classes = ('0', '1', '2', '3', '4', '5', '6', '7', '8', '9')  # MNIST has 10 classes (digits 0-9)

