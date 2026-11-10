/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031acd80; name: FUN_031acd80
 */


void FUN_031acd80(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar1 = (undefined8 *)FUN_032cf5b0(0x28);
    *puVar1 = &DAT_042f0c48;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 1;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    puVar2 = (undefined8 *)*param_1;
    if ((puVar2 != puVar1) && (*param_1 = (long)puVar1, puVar2 != (undefined8 *)0x0)) {
      FUN_032d647c(puVar2);
      return;
    }
  }
  return;
}


