/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3d074; name: FUN_02a3d074
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_02a3d074(uint *param_1,uint *param_2,int param_3,uint *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = param_1[1];
  while( true ) {
    if (*param_1 <= uVar8) {
      return 0xaa;
    }
    uVar3 = *(undefined1 *)((long)param_1 + (ulong)uVar8 + 8);
    uVar4 = *(undefined1 *)((long)param_1 + (ulong)(uVar8 + 1) + 8);
    param_1[1] = uVar8 + 2;
    uVar5 = CONCAT11(uVar3,uVar4);
    uVar1 = (ulong)uVar5;
    if ((uVar5 != 0xae) && (uVar5 != 0xab)) break;
    uVar8 = uVar8 + *(byte *)((long)param_1 + (ulong)(uVar8 + 2) + 8) + 3;
    param_1[1] = uVar8;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar8;
  }
  switch(uVar5) {
  case 0xaa:
    return uVar1;
  case 0xac:
    uVar8 = param_1[1];
    param_1[1] = uVar8 + 1;
    bVar2 = *(byte *)((long)param_1 + (ulong)uVar8 + 8);
    if ((uint)bVar2 < param_3 - 1U) {
      uVar8 = (uint)bVar2;
      *param_2 = uVar8;
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          lVar7 = 1;
        }
        else {
          lVar6 = 0;
          do {
            lVar7 = lVar6;
            uVar8 = param_1[1];
            param_1[1] = uVar8 + 1;
            param_2[lVar7 + 1] = (uint)*(byte *)((long)param_1 + (ulong)uVar8 + 8);
            uVar8 = param_1[1];
            param_1[1] = uVar8 + 1;
            param_2[lVar7 + 2] = (uint)*(byte *)((long)param_1 + (ulong)uVar8 + 8);
            lVar6 = lVar7 + 2;
          } while ((ulong)bVar2 - ((ulong)bVar2 & 1) != lVar7 + 2);
          lVar7 = lVar7 + 3;
        }
        if ((bVar2 & 1) != 0) {
          uVar8 = param_1[1];
          param_1[1] = uVar8 + 1;
          param_2[lVar7] = (uint)*(byte *)((long)param_1 + (ulong)uVar8 + 8);
        }
      }
    }
    return 0xac;
  case 0xad:
    param_1[1] = param_1[1] + 2;
    return 0xad;
  case 0xaf:
    uVar8 = param_1[1];
    param_1[1] = uVar8 + 1;
    *param_2 = (uint)*(byte *)((long)param_1 + (ulong)uVar8 + 8);
    return 0xaf;
  case 0xb0:
    return 0xb0;
  }
  if (uVar5 < 0xaa) {
    FUN_02a3d230(param_1,(&DAT_03a80f80)[uVar1],param_2);
    return uVar1;
  }
  return 0xaa;
}


