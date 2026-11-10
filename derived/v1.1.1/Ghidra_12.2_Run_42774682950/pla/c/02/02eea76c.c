/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eea76c; name: FUN_02eea76c
 */


void FUN_02eea76c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_02ec5b74(DAT_0440a180,param_1);
  if (((uVar1 & 1) != 0) &&
     (puVar2 = (undefined8 *)FUN_02eb7888(param_2), puVar2 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar2 + 1) = 0x3a;
    *puVar2 = 0x3f80000000000000;
  }
  return;
}


