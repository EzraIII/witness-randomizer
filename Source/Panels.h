#pragma once
#include <vector>

// Some of these (the puzzle ones) are duplicated elsewhere
std::vector<int> lasers = {
    0x0360D, // Symmetry
    0x03615, // Swamp
    0x09DE0, // Bunker
    0x17CA4, // Monastery
    0x032F5, // Town
    0x03613, // Treehouse
    0x0360E, // Keep Front Laser
//    0x03317, // Keep Back Laser
//    0x03608, // Desert
    0x03612, // Quarry
    0x03616, // Jungle
    0x19650, // Shadows
};

// Note: Some of these (non-controls) are duplicated elsewhere
// TODO: Gave up
std::vector<int> leftRightPanels = {
    0x01A54, // Glass Factory Entry
    0x00086, // Glass Factory Vertical Symmetry 1
    0x00087, // Glass Factory Vertical Symmetry 2
    0x00059, // Glass Factory Vertical Symmetry 3
    0x00062, // Glass Factory Vertical Symmetry 4
    0x00025, // Symmetry Island Black Dots 4
    0x00026, // Symmetry Island Black Dots 5
    0x00072, // Symmetry Island Fading Lines 3

    0x17D02, // Town Windmill Control
};

// Note: Some of these (non-controls) are duplicated elsewhere
std::vector<int> upDownPanelsSetZero = {
    0x00070, // Symmetry Island Fading Lines 5
    0x01E5A, // Mill Entry Door Left
    0x28AC7, // Town Blue 1
    0x28AC8, // Town Blue 2
    0x28ACA, // Town Blue 3
    0x28ACB, // Town Blue 4
    0x28ACC, // Town Blue 5
    0x00029, // UTM Invisible Dots Symmetry 3
    0x288AA, // UTM Perspective 4
    0x17CC4, // Mill Elevator Control

    0x1C349, // Inner Symmetry Island Entrance
};

std::vector<int> upDownPanelsSetOne = {
    0x0008D, // Glass Factory Rotational Symmetry 1
    0x00081, // Glass Factory Rotational Symmetry 2
    0x00070, // Symmetry Island Fading Lines 5
    0x01E5A, // Mill Entry Door Left
    0x28AC7, // Town Blue 1
    0x28AC8, // Town Blue 2
    0x28ACA, // Town Blue 3
    0x28ACB, // Town Blue 4
    0x28ACC, // Town Blue 5
    0x00029, // UTM Invisible Dots Symmetry 3
    0x288AA, // UTM Perspective 4

    0x17CC4, // Mill Elevator Control
};

std::vector<int> upDownPanelsSetTwo = {
    0x0008D, // Glass Factory Rotational Symmetry 1
    0x00081, // Glass Factory Rotational Symmetry 2
    0x00083, // Glass Factory Rotational Symmetry 3
    0x00084, // Glass Factory Melting 1
    0x00070, // Symmetry Island Fading Lines 5
    0x01E5A, // Mill Entry Door Left
    0x28AC7, // Town Blue 1
    0x28AC8, // Town Blue 2
    0x28ACA, // Town Blue 3
    0x28ACB, // Town Blue 4
    0x28ACC, // Town Blue 5
    0x00029, // UTM Invisible Dots Symmetry 3
    0x00082, // Glass Factory Melting 2
    0x0343A, // Glass Factory Melting 3
    0x00022, // Symmetry Island Black Dots 1
    0x00023, // Symmetry Island Black Dots 2
    0x00024, // Symmetry Island Black Dots 3
    0x00025, // Symmetry Island Black Dots 4
    0x00026, // Symmetry Island Black Dots 5
    0x00072, // Symmetry Island Fading 3
    0x00076, // Symmetry Island Fading 7
    0x3C125, // Mill Control Room Extra Panel
    0x01A0D, // UTM Blue Hard Symmetry
    0x018A0, // UTM Blue Easy Symmetry
    0x09E85, // Tunnels Into Town Big Triangles

    0x288AA, // UTM Perspective 4
};

std::vector<int> upDownPanelsSetThree = {
    0x0008D, // Glass Factory Rotational Symmetry 1
    0x00081, // Glass Factory Rotational Symmetry 2
    0x00083, // Glass Factory Rotational Symmetry 3
    0x00084, // Glass Factory Melting 1
    0x00070, // Symmetry Island Fading Lines 5
    0x01E5A, // Mill Entry Door Left
    0x28AC7, // Town Blue 1
    0x28AC8, // Town Blue 2
    0x28ACA, // Town Blue 3
    0x28ACB, // Town Blue 4
    0x28ACC, // Town Blue 5
    0x00029, // UTM Invisible Dots Symmetry 3
    0x00082, // Glass Factory Melting 2
    0x0343A, // Glass Factory Melting 3
    0x00022, // Symmetry Island Black Dots 1
    0x00023, // Symmetry Island Black Dots 2
    0x00024, // Symmetry Island Black Dots 3
    0x00025, // Symmetry Island Black Dots 4
    0x00026, // Symmetry Island Black Dots 5
    0x00072, // Symmetry Island Fading 3
    0x00076, // Symmetry Island Fading 7
    0x3C125, // Mill Control Room Extra Panel
    0x01A0D, // UTM Blue Hard Symmetry
    0x018A0, // UTM Blue Easy Symmetry
    0x09E85, // Tunnels Into Town Big Triangles

    0x0A3B5, // Tutorial Back Left
};

std::vector<int> upDownPanelsSetFour = {
    0x335AB, // UTM In Elevator Control
    0x3369D, // UTM Lower Elevator Control
    0x335AC, // UTM Upper Elevator Control
};

// Note: Some of these (non-controls) are duplicated elsewhere
std::vector<int> leftForwardRightPanelsSetOne = {
    0x00075, // Symmetry Island Colored Dots 3
    0x17DD1, // Treehouse Left Orange 9
    0x17CE3, // Treehouse Right Orange 4
    0x17DB7, // Treehouse Right Orange 10

    0x288EA, // UTM Perspective 1
    0x288FC, // UTM Perspective 2
    0x289E7, // UTM Perspective 3
};

std::vector<int> leftForwardRightPanelsSetTwo = {
    0x00075, // Symmetry Island Colored Dots 3

    0x17DD1, // Treehouse Left Orange 9
    0x17CE3, // Treehouse Right Orange 4
    0x17DB7, // Treehouse Right Orange 10
    0x17E52, // Treehouse Green 4
};

std::vector<int> pillars = {
    0x0383D, // Mountain 3 Left Pillar 1
    0x0383F, // Mountain 3 Left Pillar 2
    0x03859, // Mountain 3 Left Pillar 3
    0x339BB, // Mountain 3 Left Pillar 4
    0x3C113, // Mountain 3 Left Open Door
    0x0383A, // Mountain 3 Right Pillar 1
    0x09E56, // Mountain 3 Right Pillar 2
    0x09E5A, // Mountain 3 Right Pillar 3
    0x33961, // Mountain 3 Right Pillar 4
    0x3C114, // Mountain 3 Right Open Door
//    0x09DD5, // UTM Challenge Pillar
};

std::vector<int> challengePanels = {
    0x0A332, // Challenge Record Start
    0x0088E, // Challenge Easy Maze
    0x00BAF, // Challenge Hard Maze
    0x00BF3, // Challenge Stones Maze
    0x00C09, // Challenge Pedestal
    0x0051F, // Challenge Column Bottom Left
    0x00524, // Challenge Column Top Right
    0x00CDB, // Challenge Column Top Left
    0x00CD4, // Challenge Column Far Panel
    0x00C80, // Challenge Triple 1 Left
    0x00CA1, // Challenge Triple 1 Center
    0x00CB9, // Challenge Triple 1 Right
    0x00C22, // Challenge Triple 2 Left
    0x00C59, // Challenge Triple 2 Center
    0x00C68, // Challenge Triple 2 Right
//    0x04CB3, // Challenge Left Timer
//    0x04CB5, // Challenge Middle Timer
//    0x04CB6, // Challenge Right Timer
    0x034EC, // Challenge Triangle
    0x034F4, // Challenge Triangle
    0x1C31A, // Challenge Left Pillar
    0x1C319, // Challenge Right Pillar
//    0x0356B, // Challenge Vault Box
};

std::vector<int> mountainMultipanel = {
    0x09FCC, // Mountain 2 Multipanel 1
    0x09FCE, // Mountain 2 Multipanel 2
    0x09FCF, // Mountain 2 Multipanel 3
    0x09FD0, // Mountain 2 Multipanel 4
    0x09FD1, // Mountain 2 Multipanel 5
    0x09FD2, // Mountain 2 Multipanel 6
};

std::vector<int> mountainMetaPanels = {
    0x09F8E, //Bottom Right
    0x09FC1, //Bottom Left
    0x09F01, //Top Right
    0x09EFF, //Top Left
};

std::vector<int> quarryLaserOptions = {
    0x00064, // Tutorial Straight
    0x00182, // Tutorial Bend
    0x0A3B2, // Tutorial Back Right
    0x00295, // Tutorial Center Left
    0x00293, // Tutorial Front Center
    0x0005D, // Outside Tutorial Dots Tutorial 1
    0x0005E, // Outside Tutorial Dots Tutorial 2
    0x0005F, // Outside Tutorial Dots Tutorial 3
    0x00060, // Outside Tutorial Dots Tutorial 4
    0x00061, // Outside Tutorial Dots Tutorial 5
    0x0001C, // Outside Tutorial Stones Tutorial 4
    0x0001D, // Outside Tutorial Stones Tutorial 5
    0x0001E, // Outside Tutorial Stones Tutorial 6
    0x0001F, // Outside Tutorial Stones Tutorial 7
    0x00020, // Outside Tutorial Stones Tutorial 8
    0x033D4, // Outside Tutorial Vault
    0x0A171, // Tutorial Optional Door 1
    0x04CA4, // Tutorial Optional Door 2
    0x17CFB, // Outside Tutorial Discard
    0x3C12B, // Glass Factory Discard
    0x000B0, // Symmetry Island Door 1
    0x00079, // Symmetry Island Colored Dots 6
    0x00065, // Symmetry Island Fading Lines 1
    0x00A52, // Symmetry Island Laser Yellow 1
    0x00A57, // Symmetry Island Laser Yellow 2
    0x00A5B, // Symmetry Island Laser Yellow 3
    0x00A61, // Symmetry Island Laser Blue 1
    0x00A64, // Symmetry Island Laser Blue 2
    0x00A68, // Symmetry Island Laser Blue 3
    0x17CE7, // Desert Discard
    0x0CC7B, // Desert Vault
    0x01E59, // Mill Entry Door Right
    0x00E0C, // Mill Lower Row 1
    0x01489, // Mill Lower Row 2
    0x0148A, // Mill Lower Row 3
    0x014D9, // Mill Lower Row 4
    0x014E7, // Mill Lower Row 5
    0x014E8, // Mill Lower Row 6
    0x00557, // Mill Upper Row 1
    0x005F1, // Mill Upper Row 2
    0x00620, // Mill Upper Row 3
    0x009F5, // Mill Upper Row 4
    0x0146C, // Mill Upper Row 5
    0x3C12D, // Mill Upper Row 6
    0x03686, // Mill Upper Row 7
    0x014E9, // Mill Upper Row 8
    0x0367C, // Mill Control Room 1
    0x03677, // Mill Stairs Control
    0x17CF0, // Mill Discard
    0x021D5, // Boathouse Ramp Activation Shapers
    0x034D4, // Boathouse Ramp Activation Stars
    0x021B3, // Boathouse Erasers and Shapers 1
    0x021B4, // Boathouse Erasers and Shapers 2
    0x021B0, // Boathouse Erasers and Shapers 3
    0x021AF, // Boathouse Erasers and Shapers 4
    0x021AE, // Boathouse Erasers and Shapers 5
    0x021B5, // Boathouse Erasers and Stars 1
    0x021B6, // Boathouse Erasers and Stars 2
    0x021B7, // Boathouse Erasers and Stars 3
    0x021BB, // Boathouse Erasers and Stars 4
    0x09DB5, // Boathouse Erasers and Stars 5
    0x09DB1, // Boathouse Erasers and Stars 6
    0x3C124, // Boathouse Erasers and Stars 7
    0x09DB4, // Boathouse Erasers Shapers and Stars 2
    0x0A3CB, // Boathouse Erasers Shapers and Stars 3
    0x0A3CC, // Boathouse Erasers Shapers and Stars 4
    0x0A3D0, // Boathouse Erasers Shapers and Stars 5
    0x09E57, // Quarry Entry Gate 1
    0x17C09, // Quarry Entry Gate 2
    0x02886, // Treehouse Door 2
    0x17DAC, // Treehouse Yellow 4
    0x17D9E, // Treehouse Yellow 5
    0x17DB9, // Treehouse Yellow 6
    0x17D9C, // Treehouse Yellow 7
    0x17DC4, // Treehouse Yellow 9
    0x0A182, // Treehouse Door 3
    0x17DC8, // Treehouse First Purple 1
    0x17DC7, // Treehouse First Purple 2
    0x17CE4, // Treehouse First Purple 3
    0x17D2D, // Treehouse First Purple 4
    0x17D6C, // Treehouse First Purple 5
    0x17D97, // Treehouse Second Purple 4
    0x17BDF, // Treehouse Second Purple 5
    0x17DC6, // Treehouse Second Purple 7
    0x17DC0, // Treehouse Left Orange 4
    0x17DD9, // Treehouse Left Orange 6
    0x17DDC, // Treehouse Left Orange 8
    0x17DEC, // Treehouse Left Orange 12
    0x17DDB, // Treehouse Left Orange 15
    0x17DB2, // Treehouse Right Orange 6
    0x17DCC, // Treehouse Right Orange 7
    0x17DCA, // Treehouse Right Orange 8
    0x17DB1, // Treehouse Right Orange 11
    0x17DA2, // Treehouse Right Orange 12
    0x17E3C, // Treehouse Green 1
    0x17E4D, // Treehouse Green 2
    0x17E4F, // Treehouse Green 3
    0x17FA9, // Treehouse Green Bridge Discard
    0x17FA0, // Treehouse Laser Discard
    0x00139, // Keep Hedges 1
    0x019DC, // Keep Hedges 2
    0x019E7, // Keep Hedges 3
    0x01A0F, // Keep Hedges 4
    0x0360E, // Keep Front Laser
    0x03317, // Keep Back Laser
    0x17D27, // Keep Discard
    0x17D28, // Shipwreck Discard
    0x00AFB, // Shipwreck Vault
    0x2899C, // Town 25 Dots 1
    0x28A33, // Town 25 Dots 2
    0x28ABF, // Town 25 Dots 3
    0x28AC0, // Town 25 Dots 4
    0x28AC1, // Town 25 Dots 5
    0x28A0D, // Town Church Stars
    0x28AD9, // Town Eraser
    0x28998, // Town Green Door
    0x0A0C8, // Town Orange Crate
    0x17D01, // Town Orange Crate Discard
    0x03C08, // Town RGB Stars
    0x03C0C, // Town RGB Stones
    0x17C71, // Town Rooftop Discard
    0x17F5F, // Town Windmill Door
    0x17CF7, // Theater Discard
    0x00B10, // Monastery Left Door
    0x00C92, // Monastery Right Door
    0x17C2E, // Bunker Entry Door
    0x0056E, // Swamp Entry
    0x00474, // Swamp Tutorial 4
    0x00553, // Swamp Tutorial 5
    0x0056F, // Swamp Tutorial 6
    0x00983, // Swamp Tutorial 9
    0x00984, // Swamp Tutorial 10
    0x00986, // Swamp Tutorial 11
    0x00985, // Swamp Tutorial 12
    0x00987, // Swamp Tutorial 13
    0x181A9, // Swamp Tutorial 14
    0x00982, // Swamp Red 1
    0x0097F, // Swamp Red 2
    0x0098F, // Swamp Red 3
    0x00990, // Swamp Red 4
    0x17C0D, // Swamp Red Shortcut 1
    0x17C0E, // Swamp Red Shortcut 2
    0x00999, // Swamp Discontinuous 1
    0x0099D, // Swamp Discontinuous 2
    0x009A0, // Swamp Discontinuous 3
    0x009A1, // Swamp Discontinuous 4
    0x00008, // Swamp Rotation Tutorial 2
    0x00009, // Swamp Rotation Tutorial 3
    0x0000A, // Swamp Rotation Tutorial 4
    0x009AE, // Swamp Blue Underwater 3
    0x009AF, // Swamp Blue Underwater 4
    0x00006, // Swamp Blue Underwater 5
    0x003B2, // Swamp Rotation Advanced 1
    0x00A1E, // Swamp Rotation Advanced 2
    0x00C2E, // Swamp Rotation Advanced 3
    0x00E3A, // Swamp Rotation Advanced 4
    0x009A6, // Swamp Purple Tetris
    0x00002, // Swamp Teal Underwater 1
    0x00004, // Swamp Teal Underwater 2
    0x00005, // Swamp Teal Underwater 3
    0x013E6, // Swamp Teal Underwater 4
    0x00596, // Swamp Teal Underwater 5
    0x014D2, // Swamp Red Underwater 2
    0x014D4, // Swamp Red Underwater 3
    0x014D1, // Swamp Red Underwater 4
    0x17C05, // Swamp Laser Shortcut 1
    0x17C02, // Swamp Laser Shortcut 2
    0x09E73, // Mountain 1 Orange 1
    0x09E75, // Mountain 1 Orange 2
    0x09E78, // Mountain 1 Orange 3
    0x09E79, // Mountain 1 Orange 4
    0x09E6C, // Mountain 1 Orange 5
    0x09E6F, // Mountain 1 Orange 6
    0x09E6B, // Mountain 1 Orange 7
    0x09EAD, // Mountain 1 Purple 1
    0x09EAF, // Mountain 1 Purple 2
    0x09E7A, // Mountain 1 Green 1
    0x09E71, // Mountain 1 Green 2
    0x09E72, // Mountain 1 Green 3
    0x09E69, // Mountain 1 Green 4
    0x09E7B, // Mountain 1 Green 5
    0x09FD3, // Mountain 2 Rainbow 1
    0x09FD4, // Mountain 2 Rainbow 2
    0x09FD6, // Mountain 2 Rainbow 3
    0x09FD7, // Mountain 2 Rainbow 4
    0x17F93, // Mountain 2 Discard
    0x17FA2, // Mountain 3 Secret Door
    0x17C42, // Mountainside Discard
    0x00FF8, // UTM Entrance Door
    0x0A16B, // UTM Green Dots 1
    0x0A2CE, // UTM Green Dots 2
    0x0A2D7, // UTM Green Dots 3
    0x0A2DD, // UTM Green Dots 4
    0x0A2EA, // UTM Green Dots 5
    0x17FB9, // UTM Green Dots 6
    0x0008F, // UTM Invisible Dots 1
    0x0006B, // UTM Invisible Dots 2
    0x0008B, // UTM Invisible Dots 3
    0x0008C, // UTM Invisible Dots 4
    0x0008A, // UTM Invisible Dots 5
    0x00089, // UTM Invisible Dots 6
    0x0006A, // UTM Invisible Dots 7
    0x0006C, // UTM Invisible Dots 8
    0x021D7, // UTM Mountainside Shortcut
    0x00B71, // UTM Quarry
    0x01A31, // UTM Rainbow
    0x32962, // UTM Swamp
    0x17CF2, // UTM Waterfall Shortcut
    0x00A72, // UTM Blue Cave In
    0x009A4, // UTM Blue Discontinuous
    0x008B8, // UTM Blue Left 1
    0x00973, // UTM Blue Left 2
    0x0097B, // UTM Blue Left 3
    0x0097D, // UTM Blue Left 4
    0x0097E, // UTM Blue Left 5
    0x00994, // UTM Blue Right Far 1
    0x334D5, // UTM Blue Right Far 2
    0x00995, // UTM Blue Right Far 3
    0x00996, // UTM Blue Right Far 4
    0x00998, // UTM Blue Right Far 5
    0x00190, // UTM Blue Right Near 1
    0x00558, // UTM Blue Right Near 2
    0x00567, // UTM Blue Right Near 3
    0x006FE, // UTM Blue Right Near 4
    0x0A16E, // UTM Challenge Entrance
    0x039B4, // Tunnels Theater Catwalk

    0x03612, // Quarry Laser
};

std::vector<int> squarePanels = {
    0x00064, // Tutorial Straight
    0x00182, // Tutorial Bend
    0x0A3B2, // Tutorial Back Right
    0x00295, // Tutorial Center Left
    0x00293, // Tutorial Front Center
    0x002C2, // Tutorial Front Left
    0x0005D, // Outside Tutorial Dots Tutorial 1
    0x0005E, // Outside Tutorial Dots Tutorial 2
    0x0005F, // Outside Tutorial Dots Tutorial 3
    0x00060, // Outside Tutorial Dots Tutorial 4
    0x00061, // Outside Tutorial Dots Tutorial 5
    0x018AF, // Outside Tutorial Stones Tutorial 1
    0x0001B, // Outside Tutorial Stones Tutorial 2
    0x012C9, // Outside Tutorial Stones Tutorial 3
    0x0001C, // Outside Tutorial Stones Tutorial 4
    0x0001D, // Outside Tutorial Stones Tutorial 5
    0x0001E, // Outside Tutorial Stones Tutorial 6
    0x0001F, // Outside Tutorial Stones Tutorial 7
    0x00020, // Outside Tutorial Stones Tutorial 8
    0x00021, // Outside Tutorial Stones Tutorial 9
    0x033D4, // Outside Tutorial Vault
    0x0A171, // Tutorial Optional Door 1
    0x04CA4, // Tutorial Optional Door 2
    0x17CFB, // Outside Tutorial Discard
    0x3C12B, // Glass Factory Discard
    0x01A54, // Glass Factory Entry
    0x00086, // Glass Factory Vertical Symmetry 1
    0x00087, // Glass Factory Vertical Symmetry 2
    0x00059, // Glass Factory Vertical Symmetry 3
    0x00062, // Glass Factory Vertical Symmetry 4
    0x0008D, // Glass Factory Rotational Symmetry 1
    0x00081, // Glass Factory Rotational Symmetry 2
    0x00083, // Glass Factory Rotational Symmetry 3
    0x00084, // Glass Factory Melting 1
    0x00082, // Glass Factory Melting 2
    0x0343A, // Glass Factory Melting 3
    0x000B0, // Symmetry Island Door 1
    0x00022, // Symmetry Island Black Dots 1
    0x00023, // Symmetry Island Black Dots 2
    0x00024, // Symmetry Island Black Dots 3
    0x00025, // Symmetry Island Black Dots 4
    0x00026, // Symmetry Island Black Dots 5
    0x0007C, // Symmetry Island Colored Dots 1
    0x0007E, // Symmetry Island Colored Dots 2
    0x00075, // Symmetry Island Colored Dots 3
    0x00073, // Symmetry Island Colored Dots 4
    0x00077, // Symmetry Island Colored Dots 5
    0x00079, // Symmetry Island Colored Dots 6
    0x00065, // Symmetry Island Fading Lines 1
    0x0006D, // Symmetry Island Fading Lines 2
    0x00072, // Symmetry Island Fading Lines 3
    0x0006F, // Symmetry Island Fading Lines 4
    0x00070, // Symmetry Island Fading Lines 5
    0x00071, // Symmetry Island Fading Lines 6
    0x00076, // Symmetry Island Fading Lines 7
    0x00A52, // Symmetry Island Laser Yellow 1
    0x00A57, // Symmetry Island Laser Yellow 2
    0x00A5B, // Symmetry Island Laser Yellow 3
    0x00A61, // Symmetry Island Laser Blue 1
    0x00A64, // Symmetry Island Laser Blue 2
    0x00A68, // Symmetry Island Laser Blue 3
    0x17CE7, // Desert Discard
    0x0CC7B, // Desert Vault
    0x01E5A, // Mill Entry Door Left
    0x01E59, // Mill Entry Door Right
    0x00E0C, // Mill Lower Row 1
    0x01489, // Mill Lower Row 2
    0x0148A, // Mill Lower Row 3
    0x014D9, // Mill Lower Row 4
    0x014E7, // Mill Lower Row 5
    0x014E8, // Mill Lower Row 6
    0x00557, // Mill Upper Row 1
    0x005F1, // Mill Upper Row 2
    0x00620, // Mill Upper Row 3
    0x009F5, // Mill Upper Row 4
    0x0146C, // Mill Upper Row 5
    0x3C12D, // Mill Upper Row 6
    0x03686, // Mill Upper Row 7
    0x014E9, // Mill Upper Row 8
    0x0367C, // Mill Control Room 1
    0x3C125, // Mill Control Room 2
    0x03677, // Mill Stairs Control
    0x17CF0, // Mill Discard
    0x021D5, // Boathouse Ramp Activation Shapers
    0x034D4, // Boathouse Ramp Activation Stars
    0x021B3, // Boathouse Erasers and Shapers 1
    0x021B4, // Boathouse Erasers and Shapers 2
    0x021B0, // Boathouse Erasers and Shapers 3
    0x021AF, // Boathouse Erasers and Shapers 4
    0x021AE, // Boathouse Erasers and Shapers 5
    0x021B5, // Boathouse Erasers and Stars 1
    0x021B6, // Boathouse Erasers and Stars 2
    0x021B7, // Boathouse Erasers and Stars 3
    0x021BB, // Boathouse Erasers and Stars 4
    0x09DB5, // Boathouse Erasers and Stars 5
    0x09DB1, // Boathouse Erasers and Stars 6
    0x3C124, // Boathouse Erasers and Stars 7
    0x09DB3, // Boathouse Erasers Shapers and Stars 1
    0x09DB4, // Boathouse Erasers Shapers and Stars 2
    0x0A3CB, // Boathouse Erasers Shapers and Stars 3
    0x0A3CC, // Boathouse Erasers Shapers and Stars 4
    0x0A3D0, // Boathouse Erasers Shapers and Stars 5
    0x09E57, // Quarry Entry Gate 1
    0x17C09, // Quarry Entry Gate 2
    0x0288C, // Treehouse Door 1
    0x02886, // Treehouse Door 2
    0x17D72, // Treehouse Yellow 1
    0x17D8F, // Treehouse Yellow 2
    0x17D74, // Treehouse Yellow 3
    0x17DAC, // Treehouse Yellow 4
    0x17D9E, // Treehouse Yellow 5
    0x17DB9, // Treehouse Yellow 6
    0x17D9C, // Treehouse Yellow 7
    0x17DC2, // Treehouse Yellow 8
    0x17DC4, // Treehouse Yellow 9
    0x0A182, // Treehouse Door 3
    0x17DC8, // Treehouse First Purple 1
    0x17DC7, // Treehouse First Purple 2
    0x17CE4, // Treehouse First Purple 3
    0x17D2D, // Treehouse First Purple 4
    0x17D6C, // Treehouse First Purple 5
    0x17D9B, // Treehouse Second Purple 1
    0x17D99, // Treehouse Second Purple 2
    0x17DAA, // Treehouse Second Purple 3
    0x17D97, // Treehouse Second Purple 4
    0x17BDF, // Treehouse Second Purple 5
    0x17D91, // Treehouse Second Purple 6
    0x17DC6, // Treehouse Second Purple 7
    0x17DB3, // Treehouse Left Orange 1
    0x17DB5, // Treehouse Left Orange 2
    0x17DB6, // Treehouse Left Orange 3
    0x17DC0, // Treehouse Left Orange 4
    0x17DD7, // Treehouse Left Orange 5
    0x17DD9, // Treehouse Left Orange 6
    0x17DB8, // Treehouse Left Orange 7
    0x17DDC, // Treehouse Left Orange 8
    0x17DDE, // Treehouse Left Orange 10
    0x17DE3, // Treehouse Left Orange 11
    0x17DEC, // Treehouse Left Orange 12
    0x17DAE, // Treehouse Left Orange 13
    0x17DB0, // Treehouse Left Orange 14
    0x17DDB, // Treehouse Left Orange 15
    0x17D88, // Treehouse Right Orange 1
    0x17DB4, // Treehouse Right Orange 2
    0x17D8C, // Treehouse Right Orange 3
    0x17DCD, // Treehouse Right Orange 5
    0x17DB2, // Treehouse Right Orange 6
    0x17DCC, // Treehouse Right Orange 7
    0x17DCA, // Treehouse Right Orange 8
    0x17D8E, // Treehouse Right Orange 9
    0x17DB1, // Treehouse Right Orange 11
    0x17DA2, // Treehouse Right Orange 12
    0x17E3C, // Treehouse Green 1
    0x17E4D, // Treehouse Green 2
    0x17E4F, // Treehouse Green 3
    0x17E5B, // Treehouse Green 5
    0x17E5F, // Treehouse Green 6
    0x17E61, // Treehouse Green 7
    0x17FA9, // Treehouse Green Bridge Discard
    0x17FA0, // Treehouse Laser Discard
    0x00139, // Keep Hedges 1
    0x019DC, // Keep Hedges 2
    0x019E7, // Keep Hedges 3
    0x01A0F, // Keep Hedges 4
    0x0360E, // Keep Front Laser
    0x03317, // Keep Back Laser
    0x17D27, // Keep Discard
    0x17D28, // Shipwreck Discard
    0x00AFB, // Shipwreck Vault
    0x2899C, // Town 25 Dots 1
    0x28A33, // Town 25 Dots 2
    0x28ABF, // Town 25 Dots 3
    0x28AC0, // Town 25 Dots 4
    0x28AC1, // Town 25 Dots 5
    0x28938, // Town Apple Tree
    0x28AC7, // Town Blue 1
    0x28AC8, // Town Blue 2
    0x28ACA, // Town Blue 3
    0x28ACB, // Town Blue 4
    0x28ACC, // Town Blue 5
    0x28A0D, // Town Church Stars
    0x28AD9, // Town Eraser
    0x28998, // Town Green Door
    0x0A0C8, // Town Orange Crate
    0x17D01, // Town Orange Crate Discard
    0x03C08, // Town RGB Stars
    0x03C0C, // Town RGB Stones
    0x17C71, // Town Rooftop Discard
    0x17F5F, // Town Windmill Door
    0x17F89, // Theater Entrance
    0x17CF7, // Theater Discard
    0x33AB2, // Theater Corona Exit
    0x0A168, // Theater Sun Exit
    0x00B10, // Monastery Left Door
    0x00C92, // Monastery Right Door
    0x17C2E, // Bunker Entry Door
    0x0056E, // Swamp Entry
    0x00469, // Swamp Tutorial 1
    0x00472, // Swamp Tutorial 2
    0x00262, // Swamp Tutorial 3
    0x00474, // Swamp Tutorial 4
    0x00553, // Swamp Tutorial 5
    0x0056F, // Swamp Tutorial 6
    0x00390, // Swamp Tutorial 7
    0x010CA, // Swamp Tutorial 8
    0x00983, // Swamp Tutorial 9
    0x00984, // Swamp Tutorial 10
    0x00986, // Swamp Tutorial 11
    0x00985, // Swamp Tutorial 12
    0x00987, // Swamp Tutorial 13
    0x181A9, // Swamp Tutorial 14
    0x00982, // Swamp Red 1
    0x0097F, // Swamp Red 2
    0x0098F, // Swamp Red 3
    0x00990, // Swamp Red 4
    0x17C0D, // Swamp Red Shortcut 1
    0x17C0E, // Swamp Red Shortcut 2
    0x00999, // Swamp Discontinuous 1
    0x0099D, // Swamp Discontinuous 2
    0x009A0, // Swamp Discontinuous 3
    0x009A1, // Swamp Discontinuous 4
    0x00007, // Swamp Rotation Tutorial 1
    0x00008, // Swamp Rotation Tutorial 2
    0x00009, // Swamp Rotation Tutorial 3
    0x0000A, // Swamp Rotation Tutorial 4
    0x009AB, // Swamp Blue Underwater 1
    0x009AD, // Swamp Blue Underwater 2
    0x009AE, // Swamp Blue Underwater 3
    0x009AF, // Swamp Blue Underwater 4
    0x00006, // Swamp Blue Underwater 5
    0x003B2, // Swamp Rotation Advanced 1
    0x00A1E, // Swamp Rotation Advanced 2
    0x00C2E, // Swamp Rotation Advanced 3
    0x00E3A, // Swamp Rotation Advanced 4
    0x009A6, // Swamp Purple Tetris
    0x00002, // Swamp Teal Underwater 1
    0x00004, // Swamp Teal Underwater 2
    0x00005, // Swamp Teal Underwater 3
    0x013E6, // Swamp Teal Underwater 4
    0x00596, // Swamp Teal Underwater 5
    0x00001, // Swamp Red Underwater 1
    0x014D2, // Swamp Red Underwater 2
    0x014D4, // Swamp Red Underwater 3
    0x014D1, // Swamp Red Underwater 4
    0x17C05, // Swamp Laser Shortcut 1
    0x17C02, // Swamp Laser Shortcut 2
    0x17F9B, // Jungle Discard
    0x09E73, // Mountain 1 Orange 1
    0x09E75, // Mountain 1 Orange 2
    0x09E78, // Mountain 1 Orange 3
    0x09E79, // Mountain 1 Orange 4
    0x09E6C, // Mountain 1 Orange 5
    0x09E6F, // Mountain 1 Orange 6
    0x09E6B, // Mountain 1 Orange 7
    0x09EAD, // Mountain 1 Purple 1
    0x09EAF, // Mountain 1 Purple 2
    0x09E7A, // Mountain 1 Green 1
    0x09E71, // Mountain 1 Green 2
    0x09E72, // Mountain 1 Green 3
    0x09E69, // Mountain 1 Green 4
    0x09E7B, // Mountain 1 Green 5
    0x09FD3, // Mountain 2 Rainbow 1
    0x09FD4, // Mountain 2 Rainbow 2
    0x09FD6, // Mountain 2 Rainbow 3
    0x09FD7, // Mountain 2 Rainbow 4
    0x17F93, // Mountain 2 Discard
    0x17FA2, // Mountain 3 Secret Door
    0x17C42, // Mountainside Discard
    0x002A6, // Mountainside Vault
    0x0042D, // Mountaintop River
    0x00FF8, // UTM Entrance Door
    0x0A16B, // UTM Green Dots 1
    0x0A2CE, // UTM Green Dots 2
    0x0A2D7, // UTM Green Dots 3
    0x0A2DD, // UTM Green Dots 4
    0x0A2EA, // UTM Green Dots 5
    0x17FB9, // UTM Green Dots 6
    0x0008F, // UTM Invisible Dots 1
    0x0006B, // UTM Invisible Dots 2
    0x0008B, // UTM Invisible Dots 3
    0x0008C, // UTM Invisible Dots 4
    0x0008A, // UTM Invisible Dots 5
    0x00089, // UTM Invisible Dots 6
    0x0006A, // UTM Invisible Dots 7
    0x0006C, // UTM Invisible Dots 8
    0x00027, // UTM Invisible Dots Symmetry 1
    0x00028, // UTM Invisible Dots Symmetry 2
    0x00029, // UTM Invisible Dots Symmetry 3
    0x021D7, // UTM Mountainside Shortcut
    0x00B71, // UTM Quarry
    0x01A31, // UTM Rainbow
    0x32962, // UTM Swamp
    0x32966, // UTM Treehouse
    0x17CF2, // UTM Waterfall Shortcut
    0x00A72, // UTM Blue Cave In
    0x009A4, // UTM Blue Discontinuous
    0x018A0, // UTM Blue Easy Symmetry
    0x01A0D, // UTM Blue Hard Symmetry
    0x008B8, // UTM Blue Left 1
    0x00973, // UTM Blue Left 2
    0x0097B, // UTM Blue Left 3
    0x0097D, // UTM Blue Left 4
    0x0097E, // UTM Blue Left 5
    0x00994, // UTM Blue Right Far 1
    0x334D5, // UTM Blue Right Far 2
    0x00995, // UTM Blue Right Far 3
    0x00996, // UTM Blue Right Far 4
    0x00998, // UTM Blue Right Far 5
    0x00190, // UTM Blue Right Near 1
    0x00558, // UTM Blue Right Near 2
    0x00567, // UTM Blue Right Near 3
    0x006FE, // UTM Blue Right Near 4
    0x0A16E, // UTM Challenge Entrance
    0x039B4, // Tunnels Theater Catwalk
    0x09E85, // Tunnels Town Shortcut
};

std::vector<int> desertPanels = {
    0x00698, // Desert Surface 1
    0x0048F, // Desert Surface 2
    0x09F92, // Desert Surface 3
    0x0A036, // Desert Surface 4
    0x09DA6, // Desert Surface 5
    0x0A049, // Desert Surface 6
    0x0A053, // Desert Surface 7
    0x09F94, // Desert Surface 8
    0x00422, // Desert Light 1
    0x006E3, // Desert Light 2
    0x0A02D, // Desert Light 3
    0x00C72, // Desert Pond 1
    0x0129D, // Desert Pond 2
    0x008BB, // Desert Pond 3
    0x0078D, // Desert Pond 4
    0x18313, // Desert Pond 5
    0x04D18, // Desert Flood 1
    0x01205, // Desert Flood 2
    0x181AB, // Desert Flood 3
    0x0117A, // Desert Flood 4
    0x17ECA, // Desert Flood 5
//    0x18076, // Desert Flood Exit
//    0x0A15C, // Desert Final Left Convex
//    0x09FFF, // Desert Final Left Concave
//    0x0A15F, // Desert Final Near
    0x012D7, // Desert Final Far
};

std::vector<int> desertPanelsWide = {
    0x0A15C, //wide desert panel curve 1
    0x09FFF, //wide desert panel curve 2
};

std::vector<int> shadowsPanels = {
    0x198B5, // Shadows Tutorial 1
    0x198BD, // Shadows Tutorial 2
    0x198BF, // Shadows Tutorial 3
    0x19771, // Shadows Tutorial 4
    0x0A8DC, // Shadows Tutorial 5
    0x0AC74, // Shadows Tutorial 6
    0x0AC7A, // Shadows Tutorial 7
    0x0A8E0, // Shadows Tutorial 8
    0x386FA, // Shadows Avoid 1
    0x1C33F, // Shadows Avoid 2
    0x196E2, // Shadows Avoid 3
    0x1972A, // Shadows Avoid 4
    0x19809, // Shadows Avoid 5
    0x19806, // Shadows Avoid 6
    0x196F8, // Shadows Avoid 7
    0x1972F, // Shadows Avoid 8
    0x19797, // Shadows Follow 1
    0x1979A, // Shadows Follow 2
    0x197E0, // Shadows Follow 3
    0x197E8, // Shadows Follow 4
    0x197E5, // Shadows Follow 5
    0x19650, // Shadows Laser
};

std::vector<int> monasteryPanels = {
    0x00B10, // Monastery Left Door
    0x00C92, // Monastery Right Door
    0x00290, // Monastery Exterior 1
    0x00038, // Monastery Exterior 2
    0x00037, // Monastery Exterior 3
//    0x09D9B, // Monastery Bonsai
    0x193A7, // Monastery Interior 1
    0x193AA, // Monastery Interior 2
    0x193AB, // Monastery Interior 3
    0x193A6, // Monastery Interior 4
//    0x03713, // Monastery Shortcut
    0x17CA4, // Monastery Laser
};

std::vector<int> bunkerPanels = {
    0x09F7D, // Bunker Tutorial 1
    0x09FDC, // Bunker Tutorial 2
    0x09FF7, // Bunker Tutorial 3
    0x09F82, // Bunker Tutorial 4
    0x09FF8, // Bunker Tutorial 5
    0x09D9F, // Bunker Advanced 1
    0x09DA1, // Bunker Advanced 2
    0x09DA2, // Bunker Advanced 3
    0x09DAF, // Bunker Advanced 4
//    0x0A099, // Bunker Glass Door
    0x0A010, // Bunker Glass 1
    0x0A01B, // Bunker Glass 2
    0x0A01F, // Bunker Glass 3
    0x17E63, // Bunker Ultraviolet 1
    0x17E67, // Bunker Ultraviolet 2
    0x34BC5, // Bunker Open Ultraviolet
    0x34BC6, // Bunker Close Ultraviolet
    0x0A079, // Bunker Elevator
};

std::vector<int> junglePanels = {
    0x002C4, // Jungle Waves 1
    0x00767, // Jungle Waves 2
    0x002C6, // Jungle Waves 3
    0x0070E, // Jungle Waves 4
    0x0070F, // Jungle Waves 5
    0x0087D, // Jungle Waves 6
    0x002C7, // Jungle Waves 7
//    0x17CAB, // Jungle Pop-up Wall
    0x0026D, // Jungle Dots 1
    0x0026E, // Jungle Dots 2
    0x0026F, // Jungle Dots 3
    0x00C3F, // Jungle Dots 4
    0x00C41, // Jungle Dots 5
    0x014B2, // Jungle Dots 6
    0x03616, // Jungle Laser
};

std::vector<int> audiologs = {
    0x3C0F7, // Boat Treehouse Rock
    0x3C0FD, // Boat Broken Boat
    0x32A00, // Bunker Green Room
    0x3C0FE, // Desert Broken Wall
//    0x338B0, // Easter Egg Ending Briefcase (?)
//    0x338B7, // Easter Egg Ending Briefcase (?)
//    0x338AD, // Easter Egg Ending Briefcase (iOS)
//    0x338A5, // Easter Egg Ending Wine Table
//    0x338AE, // Easter Egg Ending Briefcase
//    0x338AF, // Easter Egg Ending Briefcase (?)
//    0x338A7, // Easter Egg Ending Record
//    0x338A3, // Easter Egg Ending Countertop
//    0x338A4, // Easter Egg Ending Sunbathing
//    0x3C108, // Easter Egg Ending Pool
//    0x338EF, // Easter Egg Ending Pillow
//    0x336E5, // Easter Egg Ending Apple
//    0x338A6, // Easter Egg Ending Purple Flowers
    0x3C100, // Jungle Entrance Right
    0x3C0F4, // Jungle Entrance Left
    0x3C102, // Jungle Laser
    0x3C10D, // Jungle Beach
    0x3C10E, // Keep Corridor
    0x3C10B, // Keep Guitar Amp
    0x0074F, // Keep Front Wall
    0x012C7, // Keep Throne
    0x329FF, // Mill Stairs
    0x3C106, // Monastery Left Shutters
    0x33AFF, // Mountain 1 Purple Path Panel
    0x011F9, // Mountain 1 Junk Column
    0x00763, // Mountain 1 Blue Panels
    0x32A08, // Mountain 2 Blue Path Panel
    0x3C101, // Mountain 3 Giant Floor
    0x3C0FF, // Mountain 3 Peekaboo
    0x3C103, // Mountainside Cloud Cycle
    0x00A0F, // Mountaintop
    0x339A9, // Outside Tutorial Discard
    0x015C0, // Outside Tutorial Stones
    0x33B36, // Peninsula
    0x3C10C, // Shadows Laser
    0x32A0E, // Shadows Orange Crate
    0x329FE, // Shipwreck Bridge
    0x32A07, // Swamp Purple Underwater
    0x00761, // Swamp Shortcut
    0x3C109, // Symmetry Island Behind Laser
    0x33B37, // Symmetry Island Fading Lines
    0x3C107, // Town Laser Redirect
    0x3C0F3, // Town Bell Tower
    0x015B7, // Town Obelisk
    0x3C10A, // Town Lattice Panel Right
    0x32A0A, // Town Lattice Panel Left
    0x015C1, // Treehouse Green Bridge
    0x3C12A, // Treehouse Shipwreck Shore
    0x3C104, // Treehouse Docks
//    0x3C105, // Tunnels Box
    0x339A8, // Tutorial Patio Roof
    0x0050A, // Tutorial Gate
//    0x338BD, // UTM Town Shortcut
//    0x3C135, // UTM Cave In
//    0x338C9, // UTM Mountainside Shortcut
//    0x338D7, // UTM Stairwell
//    0x338C1, // UTM Challenge Water
//    0x338CA, // UTM Invisible Dots
};

std::vector<int> orchard {
    0x00143, // Orchard Apple Tree 1
    0x0003B, // Orchard Apple Tree 2
    0x00055, // Orchard Apple Tree 3
    0x032F7, // Orchard Apple Tree 4
    0x032FF, // Orchard Apple Tree 5
};

std::vector<int> transparent {
    0x009B8, // Symmetry Island Transparent 1
    0x003E8, // Symmetry Island Transparent 2
    0x00A15, // Symmetry Island Transparent 3
    0x00B53, // Symmetry Island Transparent 4
    0x00B8D, // Symmetry Island Transparent 5
};

// There might be something to do with these, I haven't decided yet.
std::vector<int> nothingPanels = {
// Doors & Shortcuts & Shortcut doors & Door controls
    0x0C339, // Desert Surface Door
    0x0A249, // Desert Pond Exit Door
    0x275ED, // Mill EP Door
    0x17CAC, // Mill Stairs Shortcut Door
    0x38663, // Boathouse Shortcut
    0x09E49, // Keep Shadows Shortcut
    0x0361B, // Keep Tower Shortcut
    0x334DC, // Shadows Inner Door Control
    0x334DB, // Shadows Outer Door Control
    0x2700B, // Treehouse Exterior Door Control
    0x17CBC, // Treehouse Interior Door Control
    0x337FA, // Jungle Shortcut

// Controls (?)
    0x09FA0, // Desert Surface 3 Control
    0x09F86, // Desert Surface 8 Control
    0x1C2DF, // Desert Flood Control Lower Far Left
    0x1831E, // Desert Flood Control Lower Far Right
    0x1C260, // Desert Flood Control Lower Near Left
    0x1831C, // Desert Flood Control Lower Near Right
    0x1C2F3, // Desert Flood Control Raise Far Left
    0x1831D, // Desert Flood Control Raise Far Right
    0x1C2B1, // Desert Flood Control Raise Near Left
    0x1831B, // Desert Flood Control Raise Near Right
    0x0A015, // Desert Final Far Control
    0x03678, // Mill Lower Ramp Contol
    0x03679, // Mill Lower Lift Control
    0x03675, // Mill Upper Lift Control
    0x03676, // Mill Upper Ramp Control
    0x03852, // Boathouse Ramp Angle Control
    0x03858, // Boathouse Ramp Position Control
    0x275FA, // Boathouse Hook Control
    0x037FF, // Treehouse Drawbridge Control
    0x09F98, // Town Laser Redirect Control
    0x334D8, // Town RGB Light Control
    0x17E2B, // Swamp Flood Gate Control
    0x00609, // Swamp Surface Sliding Bridge Control
    0x18488, // Swamp Underwater Sliding Bridge Control
    0x17C0A, // Swamp Island Control 1
    0x17E07, // Swamp Island Control 2
    0x181F5, // Swamp Rotating Bridge Control

// Vault Boxes
    0x03481, // Outside Tutorial Vault Box
    0x0339E, // Desert Vault Box
    0x03535, // Shipwreck Vault Box
    0x03702, // Jungle Vault Box
    0x03542, // Mountainside Vault Box
    0x2FAF6, // Tunnels Vault Box

// Boat Summons
    0x17CC8, // Glass Factory Summon Boat
    0x17CA6, // Boathouse Summon Boat
    0x17C95, // Treehouse Summon Boat
    0x0A054, // Town Summon Boat
    0x09DB8, // Swamp Summon Boat
    0x17CDF, // Jungle Summon Boat

// Misc
    0x03629, // Tutorial Gate Open
    0x09FAA, // Desert Lightswitch
    0x0C335, // Tutorial Pillar
    0x0C373, // Tutorial Patio floor
    0x1C349, // Symmetry Island Door 2 - Collision fails here, sadly
    0x033EA, // Keep Yellow Pressure Plates
    0x0A3A8, // Keep Yellow Reset
    0x01BE9, // Keep Purple Pressure Plates
    0x0A3B9, // Keep Purple Reset
    0x01CD3, // Keep Green Pressure Plates
    0x0A3BB, // Keep Green Reset
    0x01D3F, // Keep Blue Pressure Plates
    0x0A3AD, // Keep Blue Reset
    0x2896A, // Town Bridge
    0x28A69, // Town Lattice
    0x28A79, // Town Maze
    0x28B39, // Town Red Hexagonal
    0x034E3, // Town Soundproof Dots
    0x034E4, // Town Soundproof Waves
    0x079DF, // Town Triple
    0x00815, // Theater Video Input
    0x03553, // Theater Tutorial Video
    0x03552, // Theater Desert Video
    0x0354E, // Theater Jungle Video
    0x03549, // Theater Challenge Video
    0x0354F, // Theater Shipwreck Video
    0x03545, // Theater Mountain Video
    0x18590, // Town Transparent
    0x28AE3, // Town Wire


    0x09E39, // Mountain 1 Purple Pathway
//    0x33AF5, // Mountain 1 Blue 1
//    0x33AF7, // Mountain 1 Blue 2
//    0x09F6E, // Mountain 1 Blue 3
//    0x09FD8, // Mountain 2 Rainbow 5
    0x09E86, // Mountain 2 Blue Pathway
    0x09ED8, // Mountain 2 Orange Pathway
    0x09F8E, // Mountain 3 Near Right Floor
    0x09FC1, // Mountain 3 Near Left Floor
    0x09F01, // Mountain 3 Far Right Floor
    0x09EFF, // Mountain 3 Far Left Floor
    0x09FDA, // Mountain 3 Giant Floor
//    0x01983, // Mountain 3 Left Peekaboo
//    0x01987, // Mountain 3 Right Peekaboo
//    0x3D9A6, // Mountain 3 Left Close Door
//    0x3D9A7, // Mountain 3 Right Close Door
//    0x3D9AA, // Mountain 3 Left Activate Elevator
//    0x3D9A8, // Mountain 3 Right Activate Elevator
//    0x3D9A9, // Mountain 3 Launch Elevator
//    0x3C113, // Mountain 3 Left Open Door
//    0x3C114, // Mountain 3 Right Open Door
    0x09F7F, // Mountaintop Laser Box
    0x17C34, // Mountaintop Perspective
//    0x334E1, // UTM Secret Door Control
//    0x2773D, // Tunnels Desert Shortcut
//    0x27732, // Tunnels Theater Shortcut
//    0x0A099, // Bunker Glass Door
//    0x15ADD, // Jungle Vault
//    0x17CAA, // Jungle Courtyard Gate
    0x0005C, // Glass Factory Vertical Symmetry 5
    0x17C31, // Desert Final Transparent
    0x19650, // Shadows Laser
    0x09EEB, // Mountain 2 Elevator
};
