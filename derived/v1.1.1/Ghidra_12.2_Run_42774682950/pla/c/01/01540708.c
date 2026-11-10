/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01540708; name: FUN_01540708
 */


void FUN_01540708(undefined8 *param_1)

{
  FUN_009a7ff4((float)((ulong)*param_1 >> 0x20) * 180.0 *
               (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0),
               (float)*param_1 * 90.0 *
               (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0),0);
  return;
}


