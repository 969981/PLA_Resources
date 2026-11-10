/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d6de0; name: FUN_004d6de0
 */


undefined8 FUN_004d6de0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong __n;
  void *__s2;
  byte local_2c [4];
  void *local_28;
  
  local_28 = (void *)0x0;
  local_2c[0] = 0;
  pcVar6 = *(code **)(*(long *)(param_1 + 0x598) + 0x248);
  if (pcVar6 != (code *)0x0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x3f0);
    if ((lVar3 != 0) &&
       (iVar1 = (*pcVar6)(param_1,&local_28,local_2c,lVar3,
                          *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3f8),
                          *(undefined8 *)(*(long *)(param_1 + 0x598) + 0x250)), iVar1 != 3)) {
      if (iVar1 == 0) {
        FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3e0),
                     "external/openssl/ssl/statem/statem_srvr.c",0x86b);
        lVar3 = FUN_00405020(local_28,local_2c[0],"external/openssl/ssl/statem/statem_srvr.c",0x86c)
        ;
        lVar7 = *(long *)(param_1 + 0xa8);
        *(long *)(lVar7 + 0x3e0) = lVar3;
        if (lVar3 == 0) {
          uVar5 = 0x86f;
        }
        else {
          __n = (ulong)local_2c[0];
          *(ulong *)(lVar7 + 1000) = __n;
          *(undefined4 *)(lVar7 + 0x3dc) = 0;
          __s2 = *(void **)(*(long *)(param_1 + 0x508) + 0x270);
          if (((__s2 != (void *)0x0) && (*(ulong *)(*(long *)(param_1 + 0x508) + 0x278) == __n)) &&
             (iVar1 = memcmp(local_28,__s2,__n), iVar1 == 0)) {
            return 1;
          }
          *(undefined4 *)(param_1 + 0x6f4) = 0;
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          if (__s2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: s->session->ext.alpn_selected == NULL",
                         "external/openssl/ssl/statem/statem_srvr.c",0x886);
          }
          lVar3 = FUN_00405020(local_28,__n,"external/openssl/ssl/statem/statem_srvr.c",0x88d);
          lVar7 = *(long *)(param_1 + 0x508);
          *(long *)(lVar7 + 0x270) = lVar3;
          if (lVar3 != 0) {
            *(ulong *)(lVar7 + 0x278) = (ulong)local_2c[0];
            return 1;
          }
          uVar5 = 0x891;
        }
        uVar4 = 0x44;
        uVar2 = 0x50;
      }
      else {
        uVar4 = 0xeb;
        uVar5 = 0x89b;
        uVar2 = 0x78;
      }
      FUN_004c99a0(param_1,uVar2,0x232,uVar4,"external/openssl/ssl/statem/statem_srvr.c",uVar5);
      return 0;
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x508) + 0x270) != 0) {
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  return 1;
}


