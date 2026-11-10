/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079b708; name: FUN_0079b708
 */


void FUN_0079b708(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  
  if (param_2 < 8) {
    FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x331);
                    /* try { // try from 0079b744 to 0079b757 has its CatchHandler @ 0079b8cc */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: (new_num_buckets) >= (kMinTableSize): ");
                    /* try { // try from 0079b758 to 0079b75f has its CatchHandler @ 0079b8c8 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
  }
  uVar6 = *(ulong *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 8) = param_2;
  uVar1 = FUN_0079b8e0(param_1,param_2);
  uVar7 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  do {
    while( true ) {
      if (uVar6 <= uVar7) {
        if (*(long *)(param_1 + 0x28) == 0) {
          FUN_002ee710(lVar4);
        }
        return;
      }
      piVar5 = *(int **)(lVar4 + uVar7 * 8);
      uVar8 = uVar7;
      if (piVar5 != (int *)0x0) break;
LAB_0079b7d4:
      uVar7 = uVar8 + 1;
    }
    if (piVar5 != *(int **)(lVar4 + (uVar7 ^ 1) * 8)) {
      do {
        piVar10 = *(int **)(piVar5 + 4);
        FUN_0079b470(auStack_70,param_1,
                     *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + (long)*piVar5,piVar5)
        ;
        piVar5 = piVar10;
      } while (piVar10 != (int *)0x0);
      goto LAB_0079b7d4;
    }
    plVar11 = *(long **)piVar5;
    do {
      FUN_0079b470(auStack_70,param_1,
                   *(long *)(param_1 + 8) - 1U &
                   *(long *)(param_1 + 0x10) + (long)*(int *)plVar11[4]);
      plVar2 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar2 = plVar11 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar11) {
          do {
            lVar9 = *plVar2;
            plVar2 = (long *)(lVar9 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar9);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar11 = plVar3;
    } while (plVar3 != (long *)(piVar5 + 2));
    lVar9 = *(long *)(param_1 + 0x28);
    FUN_0079ba04(piVar5,*(undefined8 *)(piVar5 + 2));
    uVar8 = uVar7 + 1;
    if (lVar9 != 0) goto LAB_0079b7d4;
    FUN_002ee710(piVar5);
    uVar7 = uVar7 + 2;
  } while( true );
}


