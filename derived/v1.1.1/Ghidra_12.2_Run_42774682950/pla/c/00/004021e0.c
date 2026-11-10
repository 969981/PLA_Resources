/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004021e0; name: FUN_004021e0
 */


void FUN_004021e0(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char *__s;
  int iVar3;
  undefined1 *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  puVar4 = (undefined1 *)FUN_00400260(0x51,"external/openssl/crypto/err/err.c",0x352);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
    if (0 < param_1) {
      lVar10 = 0;
      iVar11 = 0x50;
      iVar3 = (int)param_2[3];
      puVar8 = puVar4;
      do {
        if (iVar3 < 0) {
          *(int *)(param_2 + 3) = iVar3 + 8;
          if (0 < iVar3 + 8) goto LAB_00402288;
          puVar7 = (undefined8 *)(param_2[1] + (long)iVar3);
        }
        else {
LAB_00402288:
          puVar7 = (undefined8 *)*param_2;
          *param_2 = (long)(puVar7 + 1);
        }
        __s = "<NULL>";
        if ((char *)*puVar7 != (char *)0x0) {
          __s = (char *)*puVar7;
        }
        sVar5 = strlen(__s);
        lVar10 = sVar5 + (long)(int)lVar10;
        puVar4 = puVar8;
        if (iVar11 < (int)lVar10) {
          puVar4 = (undefined1 *)
                   FUN_00400350(puVar8,(lVar10 << 0x20) + 0x1500000000 >> 0x20,
                                "external/openssl/crypto/err/err.c",0x360);
          if (puVar4 == (undefined1 *)0x0) {
            uVar6 = 0x362;
            goto LAB_0040236c;
          }
          iVar11 = (int)lVar10 + 0x14;
        }
        FUN_00405120(puVar4,__s,(long)iVar11 + 1);
        param_1 = param_1 + -1;
        if (param_1 == 0) break;
        iVar3 = (int)param_2[3];
        puVar8 = puVar4;
      } while( true );
    }
    lVar10 = FUN_004015a0();
    if (lVar10 == 0) {
      uVar6 = 0x36a;
      puVar8 = puVar4;
LAB_0040236c:
      FUN_00400420(puVar8,"external/openssl/crypto/err/err.c",uVar6);
      return;
    }
    lVar9 = (long)*(int *)(lVar10 + 0x240);
    lVar1 = lVar10 + lVar9 * 4;
    if ((*(uint *)(lVar1 + 0x140) & 1) != 0) {
      lVar2 = lVar10 + lVar9 * 8;
      FUN_00400420(*(undefined8 *)(lVar2 + 0xc0),"external/openssl/crypto/err/err.c",0x334);
      *(undefined8 *)(lVar2 + 0xc0) = 0;
    }
    *(undefined1 **)(lVar10 + lVar9 * 8 + 0xc0) = puVar4;
    *(undefined4 *)(lVar1 + 0x140) = 3;
  }
  return;
}


