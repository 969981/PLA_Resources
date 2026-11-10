/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02913288; name: FUN_02913288
 */


int FUN_02913288(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                uint param_6,uint param_7)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0xc0))
                    (plVar2,*(undefined8 *)(param_2 + 8),param_3,param_6 | 1,&LAB_0290f2d0,param_1,0
                     ,0,0);
  if (iVar1 != 0) {
    FUN_0291629c(*(undefined8 *)(param_1 + 0x178),param_2,iVar1,param_3,param_4,param_5,param_7 & 1)
    ;
  }
  return iVar1;
}


