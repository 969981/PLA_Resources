/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa228; name: FUN_02eaa228
 */


undefined8 FUN_02eaa228(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined4 local_60 [2];
  long local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  byte local_24;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    local_58 = *(long *)(param_1 + 0x50);
    if (local_58 == 0) {
      return 2;
    }
    local_44 = 0;
    local_3c = 0;
    local_4c = 0;
    uStack_48 = 4;
    local_38 = 0;
    uStack_30 = 0;
    local_50 = *(undefined4 *)(param_1 + 0x6c);
    local_40 = 0;
    local_24 = *(byte *)(param_2 + 0xc) & 1 | (*(byte *)(param_2 + 0xd) & 1) << 1;
    local_28 = *(undefined4 *)(param_2 + 8);
    local_60[0] = 4;
    iVar1 = *(int *)(param_1 + 0x78);
    if (((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x90), iVar1 == 0)) ||
       (plVar2 = (long *)FUN_02e7d2ec(DAT_0440a120,iVar1,0), plVar2 == (long *)0x0)) {
      return 0xf;
    }
    (**(code **)(*plVar2 + 0x98))(plVar2,local_60);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return 1;
}


