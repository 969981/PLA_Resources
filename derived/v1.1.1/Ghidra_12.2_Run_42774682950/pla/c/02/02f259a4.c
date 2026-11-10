/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f259a4; name: FUN_02f259a4
 */


void FUN_02f259a4(float param_1,long param_2,long param_3,ulong param_4,uint param_5,byte *param_6,
                 byte *param_7,long param_8)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  void *__s;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = *(long *)(param_2 + 0x28);
  if (lVar6 != 0) {
    bVar11 = *(byte *)(lVar6 + 0x168);
    bVar4 = bVar11 >> 1 & 1;
    do {
      bVar11 = bVar11 & 1;
      lVar6 = *(long *)(lVar6 + 0x48);
      while( true ) {
        if (lVar6 == 0) goto LAB_02f25a18;
        if (bVar4 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = *(byte *)(lVar6 + 0x168) >> 1 & 1;
        }
        if (bVar11 != 0) break;
        bVar11 = 0;
        lVar6 = *(long *)(lVar6 + 0x48);
      }
      bVar11 = *(byte *)(lVar6 + 0x168);
    } while( true );
  }
  bVar11 = 1;
  bVar4 = 1;
LAB_02f25a18:
  bVar4 = bVar11 & (bVar4 | (*(byte *)(param_2 + 0x50) & 2) == 0) ^ 1;
  *param_7 = bVar4;
  if (bVar4 != 0) {
    if ((*(byte *)(*(long *)(param_2 + 8) + 0x181) & 3) != 0) {
      *param_6 = 1;
      lVar6 = *(long *)(param_2 + 0x28);
      if ((*(byte *)(param_2 + 0x50) >> 1 & 1) == 0) {
        if (lVar6 != 0) {
          bVar2 = -4096.0 <= DAT_042ac98c;
          do {
            *(byte *)(lVar6 + 0x168) = *(byte *)(lVar6 + 0x168) & 0xfc | bVar2 | 2;
            *(undefined4 *)(lVar6 + 0x15c) = 0xc5800000;
            lVar6 = *(long *)(lVar6 + 0x48);
          } while (lVar6 != 0);
        }
LAB_02f25cd0:
        *param_7 = 0;
        return;
      }
      if (lVar6 == 0) goto LAB_02f25cd0;
      bVar2 = -4096.0 <= DAT_042ac98c;
      uVar7 = (uint)*(byte *)(lVar6 + 0x168);
      uVar9 = *(byte *)(lVar6 + 0x168) >> 1 & 1;
      while( true ) {
        *(byte *)(lVar6 + 0x168) = (byte)uVar7 & 0xfe | bVar2;
        *(undefined4 *)(lVar6 + 0x15c) = 0xc5800000;
        lVar6 = *(long *)(lVar6 + 0x48);
        if (lVar6 == 0) break;
        uVar7 = (uint)*(byte *)(lVar6 + 0x168);
        uVar9 = uVar9 & (uVar7 & 2) >> 1;
      }
      if (uVar9 != 0) goto LAB_02f25cd0;
    }
    if ((param_4 & 0xff) != 0) {
      lVar6 = *(long *)(param_2 + 0x28);
      if (lVar6 != 0) {
        fVar13 = *(float *)(param_2 + 0x10);
        uVar8 = param_4 & 0xffffffff;
        do {
          while( true ) {
            if ((~*(byte *)(lVar6 + 0x168) & 3) == 0) goto LAB_02f25ae0;
            uVar9 = (uint)(param_4 & 0xff);
            if (uVar9 != *(byte *)(lVar6 + 0x150)) {
              bVar4 = *(byte *)(*(long *)(lVar6 + 0x58) + 0x80);
              if (*(long *)(lVar6 + 0x20) != 0) {
                (*DAT_0442d158)(5);
              }
              uVar10 = (ulong)bVar4 + 3;
              lVar5 = (param_4 & 0xff) * (uVar10 >> 2) * 0x20;
              *(undefined8 *)(lVar6 + 0x30) = 0;
              *(undefined8 *)(lVar6 + 0x20) = 0;
              *(undefined4 *)(lVar6 + 0x28) = 0;
              *(undefined8 *)(lVar6 + 0x38) = 0;
              uVar7 = (uint)lVar5;
              if (uVar7 == 0) {
                __s = (void *)0x0;
              }
              else {
                lVar5 = (*DAT_0442d140)(5,lVar5,0x10);
                *(long *)(lVar6 + 0x20) = lVar5;
                if (lVar5 == 0) goto LAB_02f25ae0;
                *(uint *)(lVar6 + 0x28) = uVar7;
                __s = (void *)(lVar5 + (ulong)(uVar7 >> 1));
                *(long *)(lVar6 + 0x30) = lVar5;
                *(void **)(lVar6 + 0x38) = __s;
              }
              iVar3 = ((uint)uVar10 & 0x1fc) * uVar9;
              if (iVar3 != 0) {
                uVar10 = (ulong)(uint)(iVar3 * 4);
                memset(__s,0,uVar10);
                memset(*(void **)(lVar6 + 0x30),0,uVar10);
              }
              iVar3 = FUN_02f21444(lVar6 + 0xe0,uVar8);
              if (iVar3 != 1) goto LAB_02f25ae0;
            }
            if (*(long *)(lVar6 + 0x20) != 0) {
              uVar1 = *(undefined8 *)(lVar6 + 0x30);
              *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar6 + 0x38);
              *(undefined8 *)(lVar6 + 0x38) = uVar1;
            }
            fVar12 = 0.0;
            if ((*(byte *)(lVar6 + 0x168) & 1) == 0) {
              fVar12 = fVar13 * param_1 * *(float *)(lVar6 + 0x158);
            }
            *(float *)(lVar6 + 0x14) = fVar12;
            if (((*(byte *)(param_3 + 0x10c) >> 3 & 1) != 0) && (*(int *)(lVar6 + 0x164) != 3))
            break;
            FUN_02e721d8(param_3,uVar8,lVar6);
LAB_02f25acc:
            if (param_8 != 0) goto LAB_02f25b18;
LAB_02f25ad0:
            if ((*(byte *)(lVar6 + 0x168) >> 1 & 1) == 0) goto LAB_02f25ad8;
LAB_02f25b2c:
            lVar5 = ((ulong)(*(byte *)(*(long *)(lVar6 + 0x58) + 0x80) + 3) & 0x1fc) *
                    (ulong)*(byte *)(lVar6 + 0x150);
            if ((int)lVar5 != 0) {
              memcpy(*(void **)(lVar6 + 0x38),*(void **)(lVar6 + 0x30),lVar5 * 4);
            }
LAB_02f25b54:
            *(undefined4 *)(lVar6 + 0x10) = 0;
            lVar6 = *(long *)(lVar6 + 0x48);
            if (lVar6 == 0) goto LAB_02f25b60;
          }
          if (*(int *)(param_3 + 0x148) == 0) goto LAB_02f25acc;
          FUN_02e72338(param_3,param_3 + 0x140,uVar8,lVar6);
          if (param_8 == 0) goto LAB_02f25ad0;
LAB_02f25b18:
          FUN_02e740f4(param_8,lVar6);
          if ((*(byte *)(lVar6 + 0x168) >> 1 & 1) != 0) goto LAB_02f25b2c;
LAB_02f25ad8:
          if ((*(byte *)(param_2 + 0x50) >> 1 & 1) == 0) {
            lVar5 = ((ulong)(*(byte *)(*(long *)(lVar6 + 0x58) + 0x80) + 3) & 0x1fc) *
                    (ulong)*(byte *)(lVar6 + 0x150);
            if ((int)lVar5 != 0) {
              memcpy(*(void **)(lVar6 + 0x38),*(void **)(lVar6 + 0x30),lVar5 * 4);
            }
            *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar6 + 0x14);
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar6 + 0x1c);
            if ((param_5 & 1) == 0) goto LAB_02f25ae0;
            goto LAB_02f25b54;
          }
LAB_02f25ae0:
          lVar6 = *(long *)(lVar6 + 0x48);
        } while (lVar6 != 0);
      }
LAB_02f25b60:
      *(undefined8 *)(param_3 + 0x110) = *(undefined8 *)(param_3 + 0x100);
      *(undefined8 *)(param_3 + 0x118) = *(undefined8 *)(param_3 + 0x108);
    }
  }
  *param_6 = bVar11;
  return;
}


