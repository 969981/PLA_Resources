/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00703e6c; name: FUN_00703e6c
 */


void FUN_00703e6c(long param_1,byte *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  ulong *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
                    /* try { // try from 00703e90 to 00703e9b has its CatchHandler @ 007041dc */
  FUN_007135f8(param_1,0);
  FUN_002a8570(&local_60);
  uVar10 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar10 = local_50;
  }
                    /* try { // try from 00703ebc to 00703ec3 has its CatchHandler @ 007041a4 */
  FUN_00704200(param_1,uVar10);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if (lVar13 == 0) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
                    /* try { // try from 00703f74 to 00703f77 has its CatchHandler @ 007041e0 */
    lVar13 = FUN_00724638(puVar6);
    *(long *)(param_1 + 0x30) = lVar13;
    iVar12 = *(int *)(param_2 + 0x20);
    if (iVar12 == 0) goto LAB_00703f88;
LAB_00703ef8:
    if (iVar12 == 1) {
      nn::util::SNPrintf((char *)&local_60,0x20,"random%u_%u_%u_%u",(ulong)*(uint *)(param_2 + 0x2c)
                         ,(ulong)*(uint *)(param_2 + 0x24),(ulong)*(uint *)(param_2 + 0x28),
                         (ulong)*(uint *)(param_2 + 0x30));
                    /* try { // try from 00703f28 to 00703f37 has its CatchHandler @ 007041a0 */
      FUN_0070f610(&local_80,*(undefined8 *)PTR_PTR_04373338,&local_60);
      uVar10 = (ulong)&local_80 | 1;
      if ((local_80 & 1) != 0) {
        uVar10 = local_70;
      }
                    /* try { // try from 00703f4c to 00703f53 has its CatchHandler @ 00704188 */
      FUN_007043a4(lVar13,uVar10);
      if ((local_80 & 1) != 0) {
        uVar10 = CONCAT71(uStack_7f,local_80);
LAB_00703fe0:
        (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,uVar10 & 0xfffffffffffffffe,1);
      }
    }
  }
  else {
    iVar12 = *(int *)(param_2 + 0x20);
    if (iVar12 != 0) goto LAB_00703ef8;
LAB_00703f88:
    if ((*param_2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    else {
      pbVar7 = *(byte **)(param_2 + 0x10);
    }
                    /* try { // try from 00703fa8 to 00703fb3 has its CatchHandler @ 00704184 */
    FUN_0070f610(&local_60,*(undefined8 *)PTR_PTR_04373338,pbVar7);
    uVar10 = (ulong)&local_60 | 1;
    if ((local_60 & 1) != 0) {
      uVar10 = local_50;
    }
                    /* try { // try from 00703fc8 to 00703fcf has its CatchHandler @ 00704174 */
    FUN_007043a4(lVar13,uVar10);
    if ((local_60 & 1) != 0) {
      uVar10 = CONCAT71(uStack_5f,local_60);
      plStack_68 = plStack_48;
      local_70 = local_50;
      goto LAB_00703fe0;
    }
  }
  piVar11 = *(int **)(lVar13 + 0x20);
  puVar1 = (undefined8 *)(lVar13 + 0x10);
  if (piVar11 == (int *)0x0) {
    iVar12 = *(int *)(lVar13 + 0x1c);
LAB_00704038:
                    /* try { // try from 0070403c to 0070405f has its CatchHandler @ 007041e0 */
    FUN_0032bcac(puVar1,iVar12 + 1);
    piVar11 = *(int **)(lVar13 + 0x20);
    iVar12 = *piVar11;
  }
  else {
    iVar5 = *(int *)(lVar13 + 0x18);
    iVar12 = *piVar11;
    if (iVar5 < iVar12) {
      *(int *)(lVar13 + 0x18) = iVar5 + 1;
      uVar8 = *(undefined8 *)(piVar11 + (long)iVar5 * 2 + 2);
      goto LAB_00704078;
    }
    if (iVar12 == *(int *)(lVar13 + 0x1c)) goto LAB_00704038;
  }
  *piVar11 = iVar12 + 1;
  uVar8 = FUN_007248e8(*puVar1);
  iVar12 = *(int *)(lVar13 + 0x18);
  *(int *)(lVar13 + 0x18) = iVar12 + 1;
  *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)iVar12 * 8 + 8) = uVar8;
LAB_00704078:
  FUN_0070daec(param_2 + 0x38,uVar8);
  lVar2 = *param_3;
  lVar3 = param_3[1];
  do {
    if (lVar2 == lVar3) {
      pbVar4 = (byte *)param_4[1];
      for (pbVar7 = (byte *)*param_4; pbVar7 != pbVar4; pbVar7 = pbVar7 + 0x20) {
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        else {
          pbVar9 = *(byte **)(pbVar7 + 0x10);
        }
                    /* try { // try from 007040ac to 007040b3 has its CatchHandler @ 007041e4 */
        FUN_006f59cc(param_1,pbVar9);
      }
      return;
    }
    piVar11 = *(int **)(lVar13 + 0x20);
    if (piVar11 == (int *)0x0) {
      iVar12 = *(int *)(lVar13 + 0x1c);
LAB_00704128:
                    /* try { // try from 0070412c to 0070414f has its CatchHandler @ 007041e8 */
      FUN_0032bcac(puVar1,iVar12 + 1);
      piVar11 = *(int **)(lVar13 + 0x20);
      iVar12 = *piVar11;
LAB_0070413c:
      *piVar11 = iVar12 + 1;
      uVar8 = FUN_007248e8(*puVar1);
      iVar12 = *(int *)(lVar13 + 0x18);
      *(int *)(lVar13 + 0x18) = iVar12 + 1;
      *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)iVar12 * 8 + 8) = uVar8;
    }
    else {
      iVar5 = *(int *)(lVar13 + 0x18);
      iVar12 = *piVar11;
      if (iVar12 <= iVar5) {
        if (iVar12 == *(int *)(lVar13 + 0x1c)) goto LAB_00704128;
        goto LAB_0070413c;
      }
      *(int *)(lVar13 + 0x18) = iVar5 + 1;
      uVar8 = *(undefined8 *)(piVar11 + (long)iVar5 * 2 + 2);
    }
    FUN_0070daec(lVar2,uVar8);
    lVar2 = lVar2 + 0x68;
  } while( true );
}


