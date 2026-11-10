/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f08050; name: FUN_02f08050
 */


void FUN_02f08050(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_02f07b04();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)FUN_02f0818c();
    }
    else {
      puVar2 = (undefined8 *)FUN_02f080c4((int)((ulong)(lVar1 - DAT_0440ab10) >> 3) * -0x55555555);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      puVar2[1] = param_2;
    }
  }
  return;
}


