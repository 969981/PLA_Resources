/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12e80; name: FUN_00d12e80
 */


long * FUN_00d12e80(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094801c(plVar2,0x100000,param_2,1);
    puVar1 = PTR_DAT_0437a010 + 0xf0;
    *plVar2 = (long)(PTR_DAT_0437a010 + 0x10);
    plVar2[1] = (long)puVar1;
    FUN_02bcf75c(plVar2 + 0xe,param_2);
    *(long **)(param_1 + 8) = plVar2;
    (**(code **)(*plVar2 + 0xb0))(plVar2,"PmlUse::MemoryID::PMLIB");
  }
  return plVar2;
}


