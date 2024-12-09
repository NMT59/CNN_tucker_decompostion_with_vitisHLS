import torch
import torch.nn as nn
NUM_CLASSES = 10
import torch.nn.functional as F
#class AlexNet(nn.Module):
#    def __init__(self, num_classes=NUM_CLASSES):
#        super(AlexNet, self).__init__()
#        self.features = nn.Sequential(
#            nn.Conv2d(3, 64, kernel_size=3, stride=2, padding=1),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2),
#            nn.Conv2d(64, 192, kernel_size=3, padding=1),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2),
#            nn.Conv2d(192, 384, kernel_size=3, padding=1),
#            nn.ReLU(inplace=True),
#            nn.Conv2d(384, 256, kernel_size=3, padding=1),
#            nn.ReLU(inplace=True),
#            nn.Conv2d(256, 256, kernel_size=3, padding=1),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2),
#        )
#        self.classifier = nn.Sequential(
#            nn.Dropout(),
#            nn.Linear(256 * 2 * 2, 2048),
#            nn.ReLU(inplace=True),
#            nn.Dropout(),
#            nn.Linear(2048, 2048),
#            nn.ReLU(inplace=True),
#            nn.Linear(2048, num_classes),
#        )

#    def forward(self, x):
#        x = self.features(x)
#        x = x.view(x.size(0), 256 * 2 * 2)
#        x = self.classifier(x)
#        return x
#############################################
class AlexNet(nn.Module):
    def __init__(self, num_classes=NUM_CLASSES):
        super(AlexNet, self).__init__()
        self.features = nn.Sequential(
            nn.Conv2d(3, 64, kernel_size=3, padding=0),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(kernel_size=2),
            nn.Conv2d(64, 192, kernel_size=3, padding=0),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(kernel_size=2),
            nn.Conv2d(192, 256, kernel_size=3, padding=0),
            nn.ReLU(inplace=True),
            nn.Conv2d(256, 256, kernel_size=3, padding=0),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(kernel_size=2),
        )
        self.classifier = nn.Sequential(
            nn.Dropout(),
            nn.Linear(64 * 2 * 2, 128),
            nn.ReLU(inplace=True),
            nn.Dropout(),
            nn.Linear(128, 128),
            nn.ReLU(inplace=True),
            nn.Linear(128, num_classes),
        )

    def forward(self, x):
        x = self.features(x)
        x = x.view(x.size(0), -1)
        x = self.classifier(x)
        return x
#########################################################
#class AlexNet(nn.Module):
#    def __init__(self):
#        super(AlexNet, self).__init__()

        # Phần features
#        self.features = nn.Sequential(
#            nn.Conv2d(in_channels=1, out_channels=6, kernel_size=5, padding=0),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2, stride=2),
#            nn.Conv2d(in_channels=6, out_channels=16, kernel_size=5, padding=0),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2, stride=2),
#            nn.Conv2d(in_channels=16, out_channels=120, kernel_size=5, padding=0),
#            nn.ReLU(inplace=True)
#        )

        # Phần classifier
#        self.classifier = nn.Sequential(
#            nn.Linear(120 * 1 * 1, 84),  # Assuming input image size 32x32
#            nn.ReLU(inplace=True),
#            nn.Linear(84, 10),
#            nn.LogSoftmax(dim=1)
#        )

#    def forward(self, x):
#        # Áp dụng các lớp features
#        x = self.features(x)

        # Flatten đầu ra
#        x = x.view(x.size(0), -1)

        # Áp dụng các lớp classifier
#        x = self.classifier(x)

#        return x
##########################################################
#class AlexNet(nn.Module):
#    def __init__(self):
#        super(AlexNet, self).__init__()

        # Phần features
#        self.features = nn.Sequential(
#            nn.Conv2d(in_channels=1, out_channels=20, kernel_size=5, padding=0),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2),
#            nn.Conv2d(in_channels=20, out_channels=50, kernel_size=5, padding=0),
#            nn.ReLU(inplace=True),
#            nn.MaxPool2d(kernel_size=2)
#        )

        # Phần classifier
#        self.classifier = nn.Sequential(
#            nn.Linear(50 * 4 * 4, 500),  # Assuming input image size 28x28
#            nn.ReLU(inplace=True),
#            nn.Linear(500, 10),
#            nn.LogSoftmax(dim=1)
#        )

#    def forward(self, x):
        # Áp dụng các lớp features
#        x = self.features(x)

        # Flatten đầu ra
#        x = x.view(x.size(0), -1)

        # Áp dụng các lớp classifier
#        x = self.classifier(x)

#        return x