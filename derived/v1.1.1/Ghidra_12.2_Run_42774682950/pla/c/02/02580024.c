/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02580024; name: FUN_02580024
 */


void FUN_02580024(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  lVar7 = *(long *)(param_1 + 0x10);
  uVar6 = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[3];
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar4 = param_2[5];
  uVar1 = param_2[6];
  uVar6 = param_2[8];
  *(undefined8 *)(param_1 + 0x58) = param_2[7];
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar6 = param_2[0xb];
  uVar4 = param_2[9];
  uVar1 = param_2[10];
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  pbStack_48 = (byte *)FUN_02581408();
  if (pbStack_48 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_50 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_48 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_40 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_38 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)pbStack_48);
    bVar2 = *pbStack_48;
    local_50 = &DAT_cbf29ce484222645;
    pbVar5 = pbStack_48;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    local_38 = (long *)0x0;
  }
  uVar4 = FUN_0283ac34(*(undefined8 *)(lVar7 + 0x148),&local_50);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_02580198(param_1);
  return;
}


