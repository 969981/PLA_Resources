/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580600; name: FUN_00580600
 */


undefined8 FUN_00580600(byte *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  byte *pbVar9;
  
  bVar4 = *param_1;
  uVar3 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  __n = 3;
  if (uVar3 < 4) {
    __n = uVar3;
  }
  if (__n == 0) {
LAB_00580658:
    if (3 < uVar3 == 2 < uVar3) goto LAB_0058067c;
    *param_2 = 0;
LAB_00580674:
    uVar6 = 1;
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    iVar5 = memcmp(pbVar9,&DAT_038ef8a9,__n);
    if (iVar5 == 0) goto LAB_00580658;
LAB_0058067c:
    if (uVar3 == 0x12) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar9 = param_1 + 1;
      }
      if ((((((*pbVar9 == 0x46) && (pbVar9[1] == 0x69)) && (pbVar9[2] == 0x78)) &&
           (((pbVar9[3] == 0x65 && (pbVar9[4] == 100)) &&
            ((pbVar9[5] == 0x2f && ((pbVar9[6] == 0x55 && (pbVar9[7] == 0x54)))))))) &&
          (pbVar9[8] == 0x43)) &&
         ((((bVar4 = pbVar9[9], bVar4 == 0x2d || (bVar4 == 0x2b)) && (pbVar9[0xc] == 0x3a)) &&
          (pbVar9[0xf] == 0x3a)))) {
        pvVar7 = memchr("0123456789",(uint)pbVar9[10],0xb);
        if (pvVar7 == (void *)0x0) {
          return 0;
        }
        pvVar8 = memchr("0123456789",(uint)pbVar9[0xb],0xb);
        if (pvVar8 == (void *)0x0) {
          return 0;
        }
        iVar5 = ((int)pvVar7 + -0x3a33f60) * 10 + -0x3a33f60 + (int)pvVar8;
        if (iVar5 != -1) {
          pvVar7 = memchr("0123456789",(uint)pbVar9[0xd],0xb);
          if (pvVar7 == (void *)0x0) {
            return 0;
          }
          pvVar8 = memchr("0123456789",(uint)pbVar9[0xe],0xb);
          if (pvVar8 == (void *)0x0) {
            return 0;
          }
          iVar1 = ((int)pvVar7 + -0x3a33f60) * 10 + -0x3a33f60 + (int)pvVar8;
          if (iVar1 != -1) {
            pvVar7 = memchr("0123456789",(uint)pbVar9[0x10],0xb);
            if (pvVar7 == (void *)0x0) {
              return 0;
            }
            pvVar8 = memchr("0123456789",(uint)pbVar9[0x11],0xb);
            if (pvVar8 == (void *)0x0) {
              return 0;
            }
            iVar2 = ((int)pvVar7 + -0x3a33f60) * 10 + -0x3a33f60 + (int)pvVar8;
            if ((iVar2 != -1) && (iVar2 = iVar2 + (iVar1 + iVar5 * 0x3c) * 0x3c, iVar2 < 0x15181)) {
              iVar5 = 1;
              if (bVar4 == 0x2d) {
                iVar5 = -1;
              }
              *param_2 = (long)(iVar2 * iVar5);
              goto LAB_00580674;
            }
          }
        }
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


