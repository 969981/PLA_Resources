/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032b6e4; name: FUN_0032b6e4
 */


void FUN_0032b6e4(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  puVar1 = PTR_LAB_04373088;
  puVar2 = (uint *)param_1[2];
  if ((puVar2 == (uint *)0x0) || (*param_1 != 0)) {
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  else {
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      puVar2 = puVar2 + 2;
      pbVar4 = *(byte **)puVar2;
      while( true ) {
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 1) != 0) {
            FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar4 + 0x10));
          }
          FUN_002e2ea0(puVar1,pbVar4);
        }
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 2;
        if (uVar5 == 0) break;
        pbVar4 = *(byte **)puVar2;
      }
      puVar2 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar2);
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  if (lVar3 != 0) {
                    /* try { // try from 0032b710 to 0032b713 has its CatchHandler @ 0032b798 */
    FUN_0032ce8c();
  }
  return;
}


