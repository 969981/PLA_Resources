/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b69bc; name: FUN_001b69bc
 */


long FUN_001b69bc(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0x1fe) == '\0') {
    FUN_0331fefc(auStack_240,auStack_230,0x200);
    uVar2 = FUN_0332448c(auStack_240,"No index available (");
    uVar2 = FUN_033245a4(uVar2,*(undefined4 *)(lVar3 + 0x1f8));
    FUN_0332448c(uVar2,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar1 = FUN_03320b30(0x79f9d886,auStack_230,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x189);
    if (iVar1 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_240);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  return *(long *)(lVar3 + 0x90) + (long)param_2 * 0x10;
}


