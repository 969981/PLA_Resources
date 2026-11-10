/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c61778; name: FUN_02c61778
 */


uint FUN_02c61778(long param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined **local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  lVar3 = 0;
  do {
    if ((&DAT_03a84b1c)[lVar3] == param_2) {
LAB_02c617d4:
      uVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
      local_34 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
      local_40 = &PTR_LAB_0428ac88;
      local_38 = uVar1;
      uVar2 = FUN_02c54eb8(&local_40,(uint)lVar3 & 0xff);
LAB_02c61808:
      return uVar2 & 1;
    }
    if (lVar3 == 0x3c) {
      uVar2 = 0;
      goto LAB_02c61808;
    }
    if ((&DAT_03a84b20)[lVar3] == param_2) {
      lVar3 = lVar3 + 1;
      goto LAB_02c617d4;
    }
    lVar3 = lVar3 + 2;
  } while( true );
}


