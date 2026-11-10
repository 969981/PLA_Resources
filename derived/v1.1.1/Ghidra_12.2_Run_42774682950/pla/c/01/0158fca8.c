/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158fca8; name: FUN_0158fca8
 */


long * FUN_0158fca8(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  
  *(long **)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x128,8);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094801c(plVar2,param_2,param_3,1);
    puVar1 = PTR_DAT_0437a010 + 0xf0;
    *plVar2 = (long)(PTR_DAT_0437a010 + 0x10);
    plVar2[1] = (long)puVar1;
    FUN_02bcf75c(plVar2 + 0xe,param_3);
    *(long **)(param_1 + 8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"MemoryID::DEMO_SYSTEM");
  }
  return plVar2;
}


