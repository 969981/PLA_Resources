/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecceac; name: FUN_02ecceac
 */


void FUN_02ecceac(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined2 *)(param_1 + 0x2a0) = 1;
  if (DAT_0440a480 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(*DAT_0442d138)(5,0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    *puVar2 = DAT_0440a480;
    DAT_0440a480 = puVar2;
  }
  if (DAT_0440a478 == (undefined8 *)0x0) {
    DAT_0440a470 = DAT_0440a480;
  }
  else {
    *DAT_0440a478 = DAT_0440a480;
  }
  DAT_0440a478 = DAT_0440a480;
  uVar1 = *DAT_0440a480;
  *DAT_0440a480 = 0;
  DAT_0440a480 = (undefined8 *)uVar1;
  puVar2 = DAT_0440a478;
  DAT_0440a494 = DAT_0440a494 + 1;
  DAT_0440a478[1] = param_1;
  *(undefined4 *)(puVar2 + 2) = DAT_0440a468;
  *(ushort *)((long)puVar2 + 0x14) = *(ushort *)((long)puVar2 + 0x14) & 0xfe00 | 4;
  return;
}


