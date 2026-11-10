/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00704d78; name: FUN_00704d78
 */


void FUN_00704d78(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == (char *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto\\proto/matchmaking/v1/matchmaker.pb.h"
                 ,0x47a);
                    /* try { // try from 00704dd8 to 00704deb has its CatchHandler @ 00704ee4 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: value != nullptr: ");
                    /* try { // try from 00704dec to 00704df3 has its CatchHandler @ 00704ee0 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    piVar4 = *(int **)(param_1 + 0x20);
    if (piVar4 == (int *)0x0) goto LAB_00704e08;
LAB_00704d9c:
    iVar1 = *(int *)(param_1 + 0x18);
    iVar5 = *piVar4;
    if (iVar1 < iVar5) {
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      puVar6 = *(undefined8 **)(piVar4 + (long)iVar1 * 2 + 2);
      goto LAB_00704ea4;
    }
    if (iVar5 == *(int *)(param_1 + 0x1c)) goto LAB_00704e1c;
  }
  else {
    piVar4 = *(int **)(param_1 + 0x20);
    if (piVar4 != (int *)0x0) goto LAB_00704d9c;
LAB_00704e08:
    iVar5 = *(int *)(param_1 + 0x1c);
LAB_00704e1c:
    FUN_0032bcac(param_1 + 0x10,iVar5 + 1);
    piVar4 = *(int **)(param_1 + 0x20);
    iVar5 = *piVar4;
  }
  *piVar4 = iVar5 + 1;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
    }
  }
  else {
    if (*(long *)(lVar7 + 0x70) != 0) {
      FUN_0032cf88(lVar7,0,0x18);
    }
    puVar6 = (undefined8 *)FUN_0032c850(lVar7,0x18,PTR_LAB_043730d0);
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar5 + 1;
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)iVar5 * 8 + 8) = puVar6;
LAB_00704ea4:
  sVar3 = strlen(param_2);
  FUN_00291910(puVar6,param_2,sVar3);
  return;
}


