/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b222c; name: FUN_007b222c
 */


void FUN_007b222c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  
  puVar3 = PTR_DAT_043730c0;
  puVar2 = PTR_LAB_04373088;
  uVar1 = *(uint *)(param_1 + 8);
  uVar10 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x6e8);
                    /* try { // try from 007b235c to 007b236f has its CatchHandler @ 007b239c */
    uVar4 = FUN_0030f3ac(auStack_70,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 007b2370 to 007b2377 has its CatchHandler @ 007b2398 */
    FUN_0030f41c(auStack_78,uVar4);
    FUN_0030f658(auStack_70);
  }
  else if (uVar1 != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x10) + 8);
    lVar12 = *plVar11;
    pbVar5 = *(byte **)(lVar12 + 0x10);
    if (pbVar5 != PTR_DAT_043730c0) goto LAB_007b229c;
LAB_007b22c8:
    do {
      uVar6 = *(ulong *)(lVar12 + 8);
      while( true ) {
        puVar8 = (ulong *)(uVar6 & 0xfffffffffffffffe);
        uVar7 = uVar6 & 1;
        if ((uVar6 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        if ((puVar8 == (ulong *)0x0) && (lVar9 = *(long *)(lVar12 + 0x18), lVar9 != 0)) {
          FUN_0079d744(lVar9);
          FUN_002e2ea0(puVar2,lVar9);
          uVar6 = *(ulong *)(lVar12 + 8);
          uVar7 = uVar6 & 1;
        }
        *(undefined8 *)(lVar12 + 0x18) = 0;
        if (uVar7 != 0) {
          uVar6 = uVar6 & 0xfffffffffffffffe;
          if ((*(byte *)(uVar6 + 8) & 1) == 0) {
            *(undefined2 *)(uVar6 + 8) = 0;
          }
          else {
            **(undefined1 **)(uVar6 + 0x18) = 0;
            *(undefined8 *)(uVar6 + 0x10) = 0;
          }
        }
        if (uVar10 == 1) {
          *(undefined4 *)(param_1 + 8) = 0;
          return;
        }
        plVar11 = plVar11 + 1;
        uVar10 = uVar10 - 1;
        lVar12 = *plVar11;
        pbVar5 = *(byte **)(lVar12 + 0x10);
        if (pbVar5 == puVar3) goto LAB_007b22c8;
LAB_007b229c:
        if ((*pbVar5 & 1) != 0) break;
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        uVar6 = *(ulong *)(lVar12 + 8);
      }
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
    } while( true );
  }
  return;
}


