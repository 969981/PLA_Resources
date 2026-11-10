/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7090; name: FUN_004f7090
 */


undefined8 FUN_004f7090(long param_1,char *param_2,undefined4 param_3)

{
  size_t __n;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char *__s;
  char *pcVar10;
  
  if ((param_2 == (char *)0x0) || (cVar9 = *param_2, cVar9 == '\0')) {
    uVar7 = 0x71;
    uVar8 = 0xa0;
LAB_004f7234:
    FUN_004014b0(0xb,100,uVar7,"external/openssl/crypto/x509/by_dir.c",uVar8);
    return 0;
  }
  pcVar10 = param_2;
  if (cVar9 == ';') goto LAB_004f70f8;
  do {
    if (cVar9 == '\0') goto LAB_004f70f8;
    cVar9 = *pcVar10;
    while( true ) {
      if (cVar9 == '\0') {
        return 1;
      }
      pcVar10 = pcVar10 + 1;
      cVar9 = *pcVar10;
      if (cVar9 != ';') break;
LAB_004f70f8:
      __n = (long)pcVar10 - (long)param_2;
      if (__n != 0) {
        iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 8));
        if (iVar1 < 1) {
          iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 8));
          if (iVar1 < 1) goto LAB_004f7174;
        }
        else {
          iVar1 = 0;
          do {
            puVar3 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 8),iVar1);
            __s = (char *)*puVar3;
            sVar4 = strlen(__s);
            if ((sVar4 == __n) && (iVar2 = strncmp(__s,param_2,__n), iVar2 == 0)) break;
            iVar1 = iVar1 + 1;
            iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 8));
          } while (iVar1 < iVar2);
          iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 8));
          if (iVar2 <= iVar1) {
LAB_004f7174:
            if (*(long *)(param_1 + 8) == 0) {
              lVar5 = FUN_004071e0();
              *(long *)(param_1 + 8) = lVar5;
              if (lVar5 == 0) {
                uVar7 = 0x41;
                uVar8 = 0xb9;
                goto LAB_004f7234;
              }
            }
            plVar6 = (long *)FUN_00400260(0x18,"external/openssl/crypto/x509/by_dir.c",0xbd);
            if (plVar6 == (long *)0x0) {
              uVar7 = 0x41;
              uVar8 = 0xbf;
              goto LAB_004f7234;
            }
            *(undefined4 *)(plVar6 + 1) = param_3;
            lVar5 = FUN_00407340(&LAB_004f7320);
            plVar6[2] = lVar5;
            lVar5 = FUN_00404f60(param_2,__n,"external/openssl/crypto/x509/by_dir.c",0xc4);
            *plVar6 = lVar5;
            if ((lVar5 == 0) || (plVar6[2] == 0)) {
              FUN_00400420(lVar5,"external/openssl/crypto/x509/by_dir.c",0x8a);
              FUN_004078c0(plVar6[2],&LAB_004f7080);
              FUN_00400420(plVar6,"external/openssl/crypto/x509/by_dir.c",0x8c);
              return 0;
            }
            iVar1 = FUN_00407800(*(undefined8 *)(param_1 + 8),plVar6);
            if (iVar1 == 0) {
              FUN_00400420(*plVar6,"external/openssl/crypto/x509/by_dir.c",0x8a);
              FUN_004078c0(plVar6[2],&LAB_004f7080);
              FUN_00400420(plVar6,"external/openssl/crypto/x509/by_dir.c",0x8c);
              uVar7 = 0x41;
              uVar8 = 0xcb;
              goto LAB_004f7234;
            }
          }
        }
      }
      cVar9 = *pcVar10;
      param_2 = pcVar10 + 1;
    }
  } while( true );
}


