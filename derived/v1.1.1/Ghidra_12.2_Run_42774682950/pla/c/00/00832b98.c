/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00832b98; name: FUN_00832b98
 */


undefined8
FUN_00832b98(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined2 local_48 [4];
  undefined8 local_40;
  ushort local_38;
  undefined2 uStack_36;
  
  if ((param_3 & 0xff) != 0xfd) {
    if ((param_3 & 0xff) == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x00832bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    uVar1 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    lVar2 = FUN_00826cbc(uVar1,param_3);
    local_40 = *param_5;
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(char *)(lVar2 + 0x90) != -3) && (*(char *)(lVar2 + 0x91) != -3)) {
      uStack_36 = (undefined2)((uint)*(undefined4 *)(param_5 + 1) >> 0x10);
      local_38 = (ushort)(byte)*(undefined4 *)(param_5 + 1);
      local_48[0] = 0;
      uVar1 = FUN_008323f4(param_1,param_2,(char *)(lVar2 + 0x90),0,param_4,local_48,&local_40);
      return uVar1;
    }
  }
  return 0;
}


