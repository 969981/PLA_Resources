/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff9464; name: FUN_02ff9464
 */


void FUN_02ff9464(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0331fc10(&DAT_042b10c0,
                       "Function \'%s\' is not implemented for shape type %i. Please initialize shape dispatch table by calling hknpShapeFunctions::initialize(). Or if the shape type is a custom shape, implement this function for the type and set it to the dispatch table."
                       ,"getSignedDistances",*(undefined1 *)(param_1 + 0x18));
  if ((uVar1 & 1) != 0) {
    CallSupervisor(0x26);
  }
  return;
}


