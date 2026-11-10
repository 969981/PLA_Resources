/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bee64; name: FUN_001bee64
 */


undefined1  [16] FUN_001bee64(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0x1fc) == '\0') {
    FUN_0331fefc(auStack_240,auStack_230,0x200);
    uVar2 = FUN_0332448c(auStack_240,"No mass properties available (");
    uVar2 = FUN_033245a4(uVar2,*(undefined4 *)(lVar3 + 0x1f8));
    FUN_0332448c(uVar2,
                 ") hkgpConvexHull::buildMassProperties need to be called before this operation.");
    iVar1 = FUN_03320b30(0x79f9d887,auStack_230,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x191);
    if (iVar1 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_240);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  auVar4._0_8_ = *(ulong *)(lVar3 + 0x1e0);
  auVar4._8_8_ = 0;
  return auVar4;
}


