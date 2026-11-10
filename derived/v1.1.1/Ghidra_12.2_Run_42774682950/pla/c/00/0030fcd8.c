/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030fcd8; name: FUN_0030fcd8
 */


/* WARNING: Removing unreachable block (ram,0x0030fd64) */

undefined8 FUN_0030fcd8(long *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  if (param_3 < 0) {
    return 0;
  }
  if ((int)param_1[1] - (int)*param_1 < param_3) {
    bVar1 = *param_2;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) goto LAB_0030fe80;
    }
    else if (*(long *)(param_2 + 8) == 0) goto LAB_0030fe80;
    if ((bVar1 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
LAB_0030fe80:
    iVar8 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar8 = (int)param_1[5];
    }
    if (iVar8 == 0x7fffffff) goto LAB_0030ff00;
    iVar8 = (iVar8 - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
            ((int)param_1[1] - (int)*param_1);
    if (iVar8 < param_3) goto LAB_0030ff00;
    if (param_3 < 1) goto LAB_0030ff00;
    if (iVar8 < 1) goto LAB_0030ff00;
    FUN_0030ff7c(param_2,(long)param_3);
    lVar4 = *param_1;
    lVar6 = param_1[1] - lVar4;
    iVar8 = param_3 - (int)lVar6;
    if (iVar8 != 0 && (int)lVar6 <= param_3) {
      do {
        iVar5 = (int)lVar6;
        if (iVar5 != 0) {
          FUN_002e4094(param_2,lVar4,(long)iVar5);
          *param_1 = *param_1 + (long)iVar5;
          param_3 = iVar8;
        }
        uVar3 = FUN_0030fad0(param_1);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
LAB_0030ff00:
        lVar4 = *param_1;
        lVar6 = param_1[1] - lVar4;
        iVar8 = param_3 - (int)lVar6;
      } while (iVar8 != 0 && (int)lVar6 <= param_3);
    }
    FUN_002e4094(param_2,lVar4,(long)param_3);
    *param_1 = *param_1 + (long)param_3;
    return 1;
  }
  bVar1 = *param_2;
  uVar3 = (ulong)param_3;
  if ((bVar1 & 1) == 0) {
    uVar7 = (ulong)(bVar1 >> 1);
    if (uVar7 < uVar3) goto LAB_0030fd74;
LAB_0030fd48:
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar3) = 0;
      *(ulong *)(param_2 + 8) = uVar3;
      bVar1 = *param_2;
      goto joined_r0x0030fda4;
    }
    param_2[uVar3 + 1] = 0;
    *param_2 = (byte)(param_3 << 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    if (uVar3 <= uVar7) goto LAB_0030fd48;
LAB_0030fd74:
    FUN_002e6bd4(param_2,uVar3 - uVar7,0);
    bVar1 = *param_2;
joined_r0x0030fda4:
    if ((bVar1 & 1) != 0) {
      param_2 = *(byte **)(param_2 + 0x10);
      if (param_2 == (byte *)0x0) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                     ,0x10b);
                    /* try { // try from 0030fdc8 to 0030fddb has its CatchHandler @ 0030fe20 */
        uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: z.first != NULL: ");
                    /* try { // try from 0030fddc to 0030fde3 has its CatchHandler @ 0030fe1c */
        FUN_0030f41c(auStack_58,uVar2);
        FUN_0030f658(auStack_50);
        param_2 = (byte *)0x0;
      }
      goto LAB_0030fdf0;
    }
  }
  param_2 = param_2 + 1;
LAB_0030fdf0:
  memcpy(param_2,(void *)*param_1,uVar3);
  *param_1 = *param_1 + uVar3;
  return 1;
}


