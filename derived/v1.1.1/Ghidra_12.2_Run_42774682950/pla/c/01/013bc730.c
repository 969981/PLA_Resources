/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bc730; name: FUN_013bc730
 */


void FUN_013bc730(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  char local_40 [8];
  undefined8 local_38;
  
  FUN_0275d180(local_40);
  uVar1 = 0;
  if (local_40[0] != '\0') {
    uVar1 = local_38;
  }
  *param_1 = uVar1;
  *(short *)(param_1 + 1) = (short)*(undefined4 *)(param_2 + 8);
  *(ushort *)((long)param_1 + 10) = (ushort)*(byte *)(param_2 + 0x13);
  uVar3 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((long)param_1 + 0xc) = uVar3;
  bVar4 = FUN_01397210(param_2);
  *(byte *)((long)param_1 + 0xd) = ~bVar4 & 1;
  switch(uVar3) {
  case 0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  case 1:
    FUN_013bc870(param_1 + 2,param_2 + 0x18);
  default:
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    param_1[3] = *(undefined8 *)(param_2 + 0x20);
    param_1[4] = uVar5;
    param_1[2] = uVar1;
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[4] = *(undefined8 *)(param_2 + 0x28);
    param_1[5] = uVar2;
    param_1[2] = uVar1;
    param_1[3] = uVar5;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    param_1[8] = *(undefined8 *)(param_2 + 0x48);
    param_1[9] = uVar2;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    param_1[0xc] = *(undefined8 *)(param_2 + 0x68);
    param_1[0xd] = uVar2;
    param_1[10] = uVar1;
    param_1[0xb] = uVar5;
    break;
  case 4:
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x18);
  }
  return;
}


