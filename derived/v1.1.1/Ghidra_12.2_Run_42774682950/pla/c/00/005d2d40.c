/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d2d40; name: FUN_005d2d40
 */


void FUN_005d2d40(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  char *local_70;
  byte *local_68;
  byte *local_60;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  puVar4 = PTR_LAB_04373088;
  uVar8 = *param_2 >> 1;
  puVar9 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    puVar9 = (ulong *)param_2[1];
  }
  if (uVar8 != 0) {
    puVar11 = puVar9 + uVar8 * 0x12;
    do {
                    /* try { // try from 005d2dc4 to 005d2dcb has its CatchHandler @ 005d2f54 */
      piVar6 = (int *)FUN_002e4780(puVar9[0x11],"grpc.internal.address.hierarchical_path");
      if ((((piVar6 != (int *)0x0) && (*piVar6 == 2)) &&
          (plVar12 = *(long **)(piVar6 + 4), plVar12 != (long *)0x0)) &&
         (lVar1 = *plVar12, lVar1 != plVar12[1])) {
                    /* try { // try from 005d2df0 to 005d2dfb has its CatchHandler @ 005d2ed8 */
        uVar7 = FUN_005d2f6c(param_1,lVar1);
                    /* try { // try from 005d2e08 to 005d2e0f has its CatchHandler @ 005d2ed4 */
        FUN_005d30c4(&local_68,lVar1 + 0x18,plVar12[1]);
        local_70 = "grpc.internal.address.hierarchical_path";
                    /* try { // try from 005d2e14 to 005d2e27 has its CatchHandler @ 005d2ec4 */
        FUN_002e5160(auStack_90,"grpc.internal.address.hierarchical_path",&local_68,
                     &PTR_LAB_0418d6b8);
                    /* try { // try from 005d2e2c to 005d2e53 has its CatchHandler @ 005d2edc */
        local_98 = FUN_002e4270(puVar9[0x11],&local_70,1,auStack_90,1);
        FUN_005d1224(uVar7,puVar9,&local_98);
        pbVar10 = local_68;
        if (local_68 != (byte *)0x0) {
          if (local_60 != local_68) {
            bVar2 = local_60[-0x18];
            pbVar5 = local_60 + -0x18;
            while( true ) {
              pbVar3 = pbVar5;
              if ((bVar2 & 1) != 0) {
                FUN_002e2ea0(puVar4,*(undefined8 *)(local_60 + -8));
              }
              if (pbVar10 == pbVar3) break;
              bVar2 = pbVar3[-0x18];
              pbVar5 = pbVar3 + -0x18;
              local_60 = pbVar3;
            }
          }
          local_60 = pbVar10;
          FUN_002e2ea0(puVar4,local_68);
        }
      }
      puVar9 = puVar9 + 0x12;
    } while (puVar9 != puVar11);
  }
  return;
}


