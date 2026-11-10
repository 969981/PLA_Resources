/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825d80; name: FUN_00825d80
 */


void FUN_00825d80(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((ulong)*(byte *)(param_1 + 0x360) < 4) {
    lVar2 = param_1 + (ulong)*(byte *)(param_1 + 0x360) * 0x98;
    FUN_007e8410(lVar2 + 0x100);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(lVar2 + 0x188) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(lVar2 + 400) = uVar1;
    *(char *)(param_1 + 0x360) = *(char *)(param_1 + 0x360) + '\x01';
  }
  return;
}


