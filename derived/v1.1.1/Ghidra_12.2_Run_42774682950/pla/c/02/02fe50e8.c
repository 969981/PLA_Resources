/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe50e8; name: FUN_02fe50e8
 */


void FUN_02fe50e8(undefined8 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0x11;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *param_1 = &PTR_LAB_042babd0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (param_2 - (long)param_1) + -0x40;
  }
  param_1[8] = lVar2;
  uVar1 = *(ushort *)(param_2 + 0x1a) & 0x8080;
  *(ushort *)((long)param_1 + 0x1a) = uVar1;
  *param_1 = &PTR_LAB_042baa28;
  *(ushort *)((long)param_1 + 0x1a) = uVar1 | *(ushort *)(param_2 + 0x1a) & 0x8010;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  param_1[0xb] = *(undefined8 *)(param_3 + 0x18);
  param_1[10] = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  param_1[0xd] = *(undefined8 *)(param_3 + 0x28);
  param_1[0xc] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 8);
  return;
}


