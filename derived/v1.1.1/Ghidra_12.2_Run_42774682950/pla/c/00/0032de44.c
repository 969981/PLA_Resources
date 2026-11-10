/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032de44; name: FUN_0032de44
 */


bool FUN_0032de44(long param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar4 = *(int **)(param_1 + 0x10);
    uVar3 = (ulong)*(ushort *)(param_1 + 10);
    while (piVar2 = piVar4, uVar3 != 0) {
      uVar8 = uVar3 >> 1;
      piVar4 = piVar2 + uVar8 * 8 + 8;
      uVar3 = uVar3 + ~uVar8;
      if (param_2 <= piVar2[uVar8 * 8]) {
        piVar4 = piVar2;
        uVar3 = uVar8;
      }
    }
    if ((piVar2 != *(int **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 8) &&
       (plVar6 = (long *)(piVar2 + 2), *piVar2 == param_2)) {
      cVar1 = *(char *)((long)piVar2 + 0x11);
joined_r0x0032df50:
      if (cVar1 != '\0') {
        FUN_0030f640(auStack_40,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0xef);
                    /* try { // try from 0032dec0 to 0032ded3 has its CatchHandler @ 0032df5c */
        uVar5 = FUN_0030f3ac(auStack_40,"CHECK failed: !ext->is_repeated: ");
                    /* try { // try from 0032ded4 to 0032dedb has its CatchHandler @ 0032df58 */
        FUN_0030f41c(auStack_48,uVar5);
        FUN_0030f658(auStack_40);
      }
      return (*(byte *)((long)plVar6 + 10) & 1) == 0;
    }
  }
  else {
    plVar6 = (long *)(*(long *)(param_1 + 0x10) + 8);
    plVar9 = (long *)*plVar6;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar6;
      do {
        if (param_2 <= (int)plVar9[4]) {
          plVar7 = plVar9;
        }
        plVar9 = (long *)plVar9[(int)plVar9[4] < param_2];
      } while (plVar9 != (long *)0x0);
      if ((plVar7 != plVar6) && ((int)plVar7[4] <= param_2)) {
        plVar6 = plVar7 + 5;
        cVar1 = *(char *)((long)plVar7 + 0x31);
        goto joined_r0x0032df50;
      }
    }
  }
  return false;
}


