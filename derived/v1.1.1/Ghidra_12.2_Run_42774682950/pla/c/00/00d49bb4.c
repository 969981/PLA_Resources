/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d49bb4; name: FUN_00d49bb4
 */


void FUN_00d49bb4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 auStack_a0 [12];
  
  iVar3 = 0;
  auStack_a0[0] = param_1;
  do {
    lVar1 = FUN_00d57364(param_1,0,iVar3);
    if (lVar1 != 0) {
      pcVar2 = *(code **)(lVar1 + 0x348);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + 0x350) = 0;
        *(undefined8 *)(lVar1 + 0x358) = 0;
        *(undefined8 *)(lVar1 + 0x340) = 0;
        *(undefined8 *)(lVar1 + 0x348) = 0;
        (*pcVar2)(lVar1 + 0x360);
      }
      FUN_00d63680(auStack_a0,lVar1 + 0x360);
      *(code **)(lVar1 + 0x348) = FUN_00d6367c;
      *(undefined1 **)(lVar1 + 0x358) = &LAB_00d6368c;
      *(code **)(lVar1 + 0x350) = FUN_00d63680;
      *(undefined8 *)(lVar1 + 0x340) = &LAB_00d63668;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x30);
  iVar3 = 0;
  do {
    lVar1 = FUN_00d57364(param_1,1,iVar3);
    if (lVar1 != 0) {
      pcVar2 = *(code **)(lVar1 + 0x348);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar1 + 0x350) = 0;
        *(undefined8 *)(lVar1 + 0x358) = 0;
        *(undefined8 *)(lVar1 + 0x340) = 0;
        *(undefined8 *)(lVar1 + 0x348) = 0;
        (*pcVar2)(lVar1 + 0x360);
      }
      FUN_00d63680(auStack_a0,lVar1 + 0x360);
      *(code **)(lVar1 + 0x348) = FUN_00d6367c;
      *(undefined1 **)(lVar1 + 0x358) = &LAB_00d6368c;
      *(code **)(lVar1 + 0x350) = FUN_00d63680;
      *(undefined8 *)(lVar1 + 0x340) = &LAB_00d63668;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x30);
  FUN_00d6367c(auStack_a0);
  return;
}


