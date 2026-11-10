/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137af08; name: FUN_0137af08
 */


void FUN_0137af08(undefined4 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  memset(param_1 + 2,0,0x800);
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x10);
    lVar2 = lVar2 + 0x20;
    puVar1[-1] = 0xc0ea47549ab5f3d9;
    *puVar1 = 0xc0ea47549ab5f3d9;
    puVar1[1] = 0xc0ea47549ab5f3d9;
    puVar1[2] = 0xc0ea47549ab5f3d9;
  } while (lVar2 != 0x800);
  return;
}


