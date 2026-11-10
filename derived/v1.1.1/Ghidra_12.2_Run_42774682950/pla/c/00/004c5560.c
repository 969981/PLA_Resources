/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5560; name: FUN_004c5560
 */


undefined8 FUN_004c5560(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar7 = param_2[1];
  if (uVar7 == 0) {
    uVar4 = 0x2f;
    uVar5 = 0xb7;
    uVar6 = 0x147c;
  }
  else {
    uVar10 = 2;
    if (param_3 != 0) {
      uVar10 = 3;
    }
    uVar1 = 0;
    if (uVar10 != 0) {
      uVar1 = uVar7 / uVar10;
    }
    if (uVar7 == uVar1 * uVar10) {
      FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a8),
                   "external/openssl/ssl/ssl_lib.c",0x1486);
      lVar12 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar12 + 0x2b0) = 0;
      *(undefined8 *)(lVar12 + 0x2a8) = 0;
      if (param_3 == 0) {
        FUN_00400420(0,"external/openssl/ssl/packet_locl.h",0x1a4);
        *(long *)(lVar12 + 0x2a8) = 0;
        *(undefined8 *)(lVar12 + 0x2b0) = 0;
        lVar11 = param_2[1];
        if (lVar11 == 0) {
          return 1;
        }
        lVar3 = FUN_00405020(*param_2,lVar11,"external/openssl/ssl/packet_locl.h",0x1ad);
        *(long *)(lVar12 + 0x2a8) = lVar3;
        if (lVar3 != 0) {
          *(long *)(lVar12 + 0x2b0) = lVar11;
          return 1;
        }
        uVar4 = 0x50;
        uVar5 = 0x44;
        uVar6 = 0x14b4;
      }
      else {
        pcVar9 = (char *)*param_2;
        uVar7 = param_2[1];
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar7 / uVar10;
        }
        puVar2 = (undefined2 *)FUN_00400260(uVar1 << 1,"external/openssl/ssl/ssl_lib.c",0x1497);
        lVar12 = *(long *)(param_1 + 0xa8);
        *(undefined2 **)(lVar12 + 0x2a8) = puVar2;
        if (puVar2 != (undefined2 *)0x0) {
          *(undefined8 *)(lVar12 + 0x2b0) = 0;
          if (uVar7 == 0) {
            return 1;
          }
          pcVar8 = pcVar9 + 1;
          uVar7 = uVar7 - 1;
          if (*pcVar9 == '\0') goto LAB_004c567c;
          while (pcVar9 = pcVar8, uVar10 = uVar7, 1 < uVar7) {
            while( true ) {
              uVar7 = uVar10 - 3;
              puVar2 = puVar2 + 1;
              pcVar8 = pcVar9 + 3;
              if (uVar10 == 2) {
                return 1;
              }
              if (pcVar9[2] != '\0') break;
LAB_004c567c:
              if (uVar7 < 2) goto LAB_004c5714;
              *puVar2 = *(undefined2 *)pcVar8;
              *(long *)(*(long *)(param_1 + 0xa8) + 0x2b0) =
                   *(long *)(*(long *)(param_1 + 0xa8) + 0x2b0) + 2;
              pcVar9 = pcVar8;
              uVar10 = uVar7;
            }
          }
LAB_004c5714:
          FUN_004c99a0(param_1,0x32,0x208,0xf0,"external/openssl/ssl/ssl_lib.c",0x14a8);
          FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a8),
                       "external/openssl/ssl/ssl_lib.c",0x14a9);
          lVar12 = *(long *)(param_1 + 0xa8);
          *(undefined8 *)(lVar12 + 0x2b0) = 0;
          *(undefined8 *)(lVar12 + 0x2a8) = 0;
          return 0;
        }
        uVar4 = 0x50;
        uVar5 = 0x41;
        uVar6 = 0x149b;
      }
    }
    else {
      uVar4 = 0x32;
      uVar5 = 0x97;
      uVar6 = 0x1482;
    }
  }
  FUN_004c99a0(param_1,uVar4,0x208,uVar5,"external/openssl/ssl/ssl_lib.c",uVar6);
  return 0;
}


