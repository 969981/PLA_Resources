/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff38dc; name: FUN_02ff38dc
 */


void FUN_02ff38dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0331fefc(auStack_240,auStack_230,0x200);
    FUN_0332448c(auStack_240,
                 "Trying to get AABB of hknpMaskedCompoundShape without calling MaskWriter::commitChanges() after modifying the mask. The returned AABB might be wrong. Please call commitChanges() in order to get correct AABB."
                );
    FUN_03320af0(0x65e53c6e,auStack_230,
                 "../..\\Physics/Physics/Collide/Shape/Decorator/Masked/Compound/hknpMaskedCompoundShape.inl"
                 ,0x36);
    FUN_0331ff7c(auStack_240);
  }
  FUN_0333e220(param_2,param_1 + 0x70,param_3);
  return;
}


