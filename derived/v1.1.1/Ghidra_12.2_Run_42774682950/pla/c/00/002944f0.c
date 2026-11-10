/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002944f0; name: FUN_002944f0
 */


void FUN_002944f0(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                 long *param_6,long *param_7)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48 [2];
  
  plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x150,8);
  puVar1 = PTR_DAT_04373178;
  lVar3 = *param_2;
  plVar2[2] = 0;
  plVar2[3] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_5 = (long *)*param_5;
  lVar4 = *param_6;
  FUN_007840dc(plVar2 + 4);
  plVar2[4] = (long)(PTR_DAT_04373180 + 0x10);
  lVar3 = (**(code **)(*param_5 + 0x10))(param_5,lVar4,0x10);
  if (lVar3 == 0) {
    local_48[0] = 0x220;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_48,"");
  }
  FUN_00782cfc(plVar2 + 10,*param_3,0,lVar3,lVar4,1);
  puVar1 = PTR_DAT_04373188 + 0x10;
  plVar2[0x25] = (long)param_5;
  plVar2[0x26] = lVar4;
  plVar2[10] = (long)puVar1;
  lVar3 = *param_3;
  plVar2[0x28] = param_3[1];
  plVar2[0x27] = lVar3;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined1 *)((long)plVar2 + 0x149) = 1;
  lVar3 = *param_7;
  lVar4 = param_7[1];
  *param_7 = 0;
  param_7[1] = 0;
  plVar2[0x23] = lVar3;
  plVar2[0x24] = lVar4;
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


