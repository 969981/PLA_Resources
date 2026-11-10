/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fec70; name: FUN_003fec70
 */


void * FUN_003fec70(void *param_1,int param_2)

{
  int iVar1;
  void *__dest;
  long lVar2;
  
  __dest = (void *)FUN_00400260(0x2b0,"external/openssl/ssl/ssl_sess.c",0x6e);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,0x2b0);
    *(undefined8 *)((long)__dest + 0x238) = 0;
    *(undefined8 *)((long)__dest + 0x270) = 0;
    *(undefined8 *)((long)__dest + 0x1c8) = 0;
    *(undefined8 *)((long)__dest + 0x1b8) = 0;
    *(undefined8 *)((long)__dest + 0x1a8) = 0;
    *(undefined8 *)((long)__dest + 0x1a0) = 0;
    *(undefined8 *)((long)__dest + 0x228) = 0;
    *(undefined8 *)((long)__dest + 0x210) = 0;
    *(long *)((long)__dest + 0x208) = 0;
    *(undefined8 *)((long)__dest + 0x220) = 0;
    *(undefined8 *)((long)__dest + 0x218) = 0;
    *(undefined8 *)((long)__dest + 0x250) = 0;
    *(long *)((long)__dest + 0x248) = 0;
    *(undefined8 *)((long)__dest + 0x290) = 0;
    *(long *)((long)__dest + 0x288) = 0;
    *(undefined4 *)((long)__dest + 0x1d8) = 1;
    lVar2 = FUN_004000a0();
    *(long *)((long)__dest + 0x2a8) = lVar2;
    if (lVar2 != 0) {
      iVar1 = FUN_00400880(2,__dest,(long)__dest + 0x210);
      if (iVar1 != 0) {
        if (*(long *)((long)param_1 + 0x1b8) != 0) {
          iVar1 = FUN_00466c20();
          if (iVar1 == 0) goto LAB_003feec0;
          *(undefined8 *)((long)__dest + 0x1b8) = *(undefined8 *)((long)param_1 + 0x1b8);
        }
        if (*(long *)((long)param_1 + 0x1c8) != 0) {
          lVar2 = FUN_0044eb50();
          *(long *)((long)__dest + 0x1c8) = lVar2;
          if (lVar2 == 0) goto LAB_003feec0;
        }
        if (*(long *)((long)param_1 + 0x1a0) != 0) {
          lVar2 = FUN_00404f10(*(long *)((long)param_1 + 0x1a0),"external/openssl/ssl/ssl_sess.c",
                               0xa6);
          *(long *)((long)__dest + 0x1a0) = lVar2;
          if (lVar2 == 0) goto LAB_003feec0;
        }
        if (*(long *)((long)param_1 + 0x1a8) != 0) {
          lVar2 = FUN_00404f10(*(long *)((long)param_1 + 0x1a8),"external/openssl/ssl/ssl_sess.c",
                               0xac);
          *(long *)((long)__dest + 0x1a8) = lVar2;
          if (lVar2 == 0) goto LAB_003feec0;
        }
        if (*(long *)((long)param_1 + 0x208) != 0) {
          lVar2 = FUN_00406f10();
          *(long *)((long)__dest + 0x208) = lVar2;
          if (lVar2 == 0) goto LAB_003feec0;
        }
        iVar1 = FUN_00400af0(2,(long)__dest + 0x210,(long)param_1 + 0x210);
        if (iVar1 != 0) {
          if (*(long *)((long)param_1 + 0x228) != 0) {
            lVar2 = FUN_00404f10(*(long *)((long)param_1 + 0x228),"external/openssl/ssl/ssl_sess.c",
                                 0xbf);
            *(long *)((long)__dest + 0x228) = lVar2;
            if (lVar2 == 0) goto LAB_003feec0;
          }
          if (*(long *)((long)param_1 + 0x238) != 0) {
            lVar2 = FUN_00405020(*(long *)((long)param_1 + 0x238),
                                 *(undefined8 *)((long)param_1 + 0x230),
                                 "external/openssl/ssl/ssl_sess.c",200);
            *(long *)((long)__dest + 0x238) = lVar2;
            if (lVar2 == 0) goto LAB_003feec0;
          }
          if (*(long *)((long)param_1 + 0x248) != 0) {
            lVar2 = FUN_00405020(*(long *)((long)param_1 + 0x248),
                                 *(long *)((long)param_1 + 0x240) << 1,
                                 "external/openssl/ssl/ssl_sess.c",0xd0);
            *(long *)((long)__dest + 0x248) = lVar2;
            if (lVar2 == 0) goto LAB_003feec0;
          }
          if ((param_2 == 0) || (*(long *)((long)param_1 + 0x250) == 0)) {
            *(undefined8 *)((long)__dest + 0x260) = 0;
            *(undefined8 *)((long)__dest + 600) = 0;
          }
          else {
            lVar2 = FUN_00405020(*(long *)((long)param_1 + 0x250),
                                 *(undefined8 *)((long)param_1 + 600),
                                 "external/openssl/ssl/ssl_sess.c",0xd8);
            *(long *)((long)__dest + 0x250) = lVar2;
            if (lVar2 == 0) goto LAB_003feec0;
          }
          if (*(long *)((long)param_1 + 0x270) != 0) {
            lVar2 = FUN_00405020(*(long *)((long)param_1 + 0x270),
                                 *(undefined8 *)((long)param_1 + 0x278),
                                 "external/openssl/ssl/ssl_sess.c",0xe2);
            *(long *)((long)__dest + 0x270) = lVar2;
            if (lVar2 == 0) goto LAB_003feec0;
          }
          if (*(long *)((long)param_1 + 0x288) != 0) {
            lVar2 = FUN_00404f10(*(long *)((long)param_1 + 0x288),"external/openssl/ssl/ssl_sess.c",
                                 0xe9);
            *(long *)((long)__dest + 0x288) = lVar2;
            if (lVar2 == 0) goto LAB_003feec0;
          }
          if (*(long *)((long)param_1 + 0x290) == 0) {
            return __dest;
          }
          lVar2 = FUN_00405020(*(long *)((long)param_1 + 0x290),
                               *(undefined8 *)((long)param_1 + 0x298),
                               "external/openssl/ssl/ssl_sess.c",0xf2);
          *(long *)((long)__dest + 0x290) = lVar2;
          if (lVar2 != 0) {
            return __dest;
          }
        }
      }
    }
  }
LAB_003feec0:
  FUN_004014b0(0x14,0x15c,0x41,"external/openssl/ssl/ssl_sess.c",0xf9);
  FUN_003fef10(__dest);
  return (void *)0x0;
}


