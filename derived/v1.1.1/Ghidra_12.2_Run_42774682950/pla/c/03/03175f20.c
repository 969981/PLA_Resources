/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03175f20; name: FUN_03175f20
 */


void FUN_03175f20(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar2 = *(undefined8 *)(lVar1 + 0x70);
  param_2[1] = *(undefined8 *)(lVar1 + 0x78);
  *param_2 = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x80);
  param_2[3] = *(undefined8 *)(lVar1 + 0x88);
  param_2[2] = uVar2;
  FUN_03159bfc(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                        (float)param_2[1] + (float)*(undefined8 *)(param_1 + 0x58));
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)uVar2 >> 0x20),
                      (float)*param_2 + (float)uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  param_2[3] = CONCAT44((float)((ulong)param_2[3] >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                        (float)param_2[3] + (float)*(undefined8 *)(param_1 + 0x58));
  param_2[2] = CONCAT44((float)((ulong)param_2[2] >> 0x20) + (float)((ulong)uVar2 >> 0x20),
                        (float)param_2[2] + (float)uVar2);
  return;
}


