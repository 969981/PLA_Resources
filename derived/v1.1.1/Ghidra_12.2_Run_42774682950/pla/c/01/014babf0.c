/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014babf0; name: FUN_014babf0
 */


long * FUN_014babf0(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_014bab70();
  }
  *(long **)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar2 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x128,8);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094801c(plVar2,param_3,param_4,1);
    puVar1 = PTR_DAT_0437a010 + 0xf0;
    *plVar2 = (long)(PTR_DAT_0437a010 + 0x10);
    plVar2[1] = (long)puVar1;
    FUN_02bcf75c(plVar2 + 0xe,param_4);
    *(long **)(param_1 + 8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"memoryID");
  }
  return plVar2;
}


