/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4a464; name: FUN_01b4a464
 */


void FUN_01b4a464(long param_1)

{
  undefined *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  puVar1 = PTR_DAT_0437b4f0;
  if (*(char *)(param_1 + 0x380) == '\0') {
    fVar4 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x38c);
    fVar4 = *(float *)(param_1 + 0x390);
  }
  auVar3 = FUN_009a7ff4(-(fVar2 * *(float *)(*(long *)PTR_DAT_0437b4f0 + 0x8c) *
                                  (*(float *)PTR_FloatPi_04372cf0 /
                                  *(float *)PTR_FloatDegree180_04372ce0)),
                        fVar4 * *(float *)(*(long *)PTR_DAT_0437b4f0 + 0x90) *
                                (*(float *)PTR_FloatPi_04372cf0 /
                                *(float *)PTR_FloatDegree180_04372ce0),0);
  *(undefined1 (*) [16])(param_1 + 0xedf0) = auVar3;
  auVar3 = FUN_009c6b1c(*(undefined4 *)(*(long *)puVar1 + 0x94),param_1 + 0xee00,param_1 + 0xedf0);
  *(undefined1 (*) [16])(param_1 + 0xee00) = auVar3;
  FUN_01a37914(param_1);
  FUN_01a3863c(param_1);
  FUN_01a3b65c(param_1);
  return;
}


