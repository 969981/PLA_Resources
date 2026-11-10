/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc8a4; name: FUN_02ecc8a4
 */


void FUN_02ecc8a4(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  plVar3 = param_1 + 0x43;
  if ((param_2 & 1) == 0) {
    plVar3 = param_1 + 0x44;
  }
  iVar4 = (int)param_3;
  local_48 = 0x17;
  if (iVar4 == 0x8000000 || iVar4 == 0x4000000) {
    local_48 = 0x18;
  }
  local_50 = (undefined4)param_4;
  if ((iVar4 == 0x4000000) || (iVar4 == 0x2000000)) {
    local_54 = 0;
  }
  else {
    local_54 = 0x3f800000;
  }
  if (*plVar3 != 0) {
    FUN_02f0f0a8(DAT_0440a150,*plVar3,param_3,param_4 & 0xffffffff,param_4 >> 0x20,0);
    return;
  }
  local_68 = param_1 + 2;
  if ((param_2 & 1) == 0) {
    plVar3 = (long *)((long)param_1 + 0x254);
  }
  else {
    plVar3 = param_1 + 0x4a;
  }
  local_58 = (undefined4)*plVar3;
  local_44 = 0x100;
  uStack_4c = (undefined4)(param_4 >> 0x20);
  local_42 = 0;
  local_60 = param_3;
  lVar2 = FUN_02f0ed58(DAT_0440a150,&local_68,1,0);
  if ((param_2 & 1) == 0) {
    param_1[0x44] = lVar2;
  }
  else {
    param_1[0x43] = lVar2;
    uVar1 = *(uint *)((long)param_1 + 0x2a3);
    *(uint *)((long)param_1 + 0x2a3) =
         uVar1 & 0xf0000000 | uVar1 & 0x7ffffff | (uint)(iVar4 == 0x1000000) << 0x1b;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,0xe,param_4 & 0xffffffff);
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x28))(local_54,param_1,local_60,1);
  }
  return;
}


