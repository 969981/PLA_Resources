/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021e738; name: FUN_0021e738
 */


void FUN_0021e738(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  FUN_0021f4dc();
  puVar1 = PTR_DAT_04372890 + 0x10;
  puVar2 = PTR_DAT_04372898 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)puVar1;
  plVar3 = param_1 + 5;
  *plVar3 = (long)puVar2;
  param_1[9] = -1;
  FUN_0021f4b4(plVar3,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  *plVar3 = (long)(PTR_DAT_043728a0 + 0x10);
  param_1[10] = 0;
  FUN_0021f4b4(plVar3,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
                    /* WARNING: Could not recover jumptable at 0x0021e814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1,1,1);
  return;
}


