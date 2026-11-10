/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039d974; name: FUN_0039d974
 */


long FUN_0039d974(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  plVar3 = (long *)FUN_0039d754();
  lVar8 = *plVar3;
  piVar6 = *(int **)(lVar8 + 0x10);
  if (piVar6 != (int *)0x0) {
    iVar1 = *(int *)(lVar8 + 8);
    if (iVar1 < *piVar6) {
      *(int *)(lVar8 + 8) = iVar1 + 1;
      if (*(long *)(piVar6 + (long)iVar1 * 2 + 2) != 0) {
        return *(long *)(piVar6 + (long)iVar1 * 2 + 2);
      }
      lVar8 = *plVar3;
    }
  }
  if (*(int *)(lVar8 + 8) == 0) {
    uVar4 = FUN_00342dac(param_2);
    plVar7 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar4);
    if (plVar7 == (long *)0x0) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc"
                   ,0x111);
                    /* try { // try from 0039da60 to 0039da73 has its CatchHandler @ 0039db18 */
      uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: prototype != NULL: ");
                    /* try { // try from 0039da74 to 0039da7b has its CatchHandler @ 0039db14 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(auStack_60);
    }
  }
  else {
    if (*(int *)(lVar8 + 8) < 1) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x69e);
                    /* try { // try from 0039d9f4 to 0039da07 has its CatchHandler @ 0039db20 */
      uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 0039da08 to 0039da0f has its CatchHandler @ 0039db1c */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(auStack_60);
    }
    plVar7 = *(long **)(*(long *)(lVar8 + 0x10) + 8);
  }
  lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,*param_1);
  lVar5 = *plVar3;
  piVar6 = *(int **)(lVar5 + 0x10);
  if (piVar6 != (int *)0x0) {
    iVar1 = *piVar6;
    if (iVar1 < *(int *)(lVar5 + 0xc)) {
      iVar2 = *(int *)(lVar5 + 8);
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar6 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar6 + (long)iVar2 * 2 + 2) = lVar8;
      *(int *)(lVar5 + 8) = iVar2 + 1;
      **(int **)(lVar5 + 0x10) = **(int **)(lVar5 + 0x10) + 1;
      return lVar8;
    }
  }
  FUN_0033b2d4(lVar5,lVar8);
  return lVar8;
}


