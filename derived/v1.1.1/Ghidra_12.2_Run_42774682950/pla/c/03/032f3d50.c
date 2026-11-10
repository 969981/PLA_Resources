/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f3d50; name: FUN_032f3d50
 */


ulong FUN_032f3d50(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  int iVar2;
  
  if (param_1 != (ulong *)0x0) {
    do {
      iVar2 = FUN_032e3dac(param_1[1],param_2);
      if (iVar2 == 0) {
        *param_1 = *param_1 | 1;
        return param_1[1];
      }
      puVar1 = param_1 + 2;
      if (-1 < iVar2) {
        puVar1 = param_1 + 3;
      }
      param_1 = (ulong *)*puVar1;
    } while (param_1 != (ulong *)0x0);
  }
  return 0;
}


