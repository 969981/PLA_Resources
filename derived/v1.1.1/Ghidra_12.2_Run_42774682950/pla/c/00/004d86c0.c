/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d86c0; name: FUN_004d86c0
 */


undefined8 FUN_004d86c0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int local_38;
  undefined1 auStack_34 [4];
  
  uVar6 = FUN_004e7650();
  if ((int)uVar6 != 0) {
    *(undefined8 *)(param_1 + 0x618) = 0;
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined2 *)(param_1 + 0x620) = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0) ||
         (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) {
        piVar8 = (int *)(*(long *)(param_1 + 0x728) + 0x70);
      }
      else {
        piVar8 = (int *)(*(long *)(param_1 + 0x728) + 0x74);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar7 + 0xd0) = 0;
      *(undefined8 *)(lVar7 + 200) = 0;
      *(undefined8 *)(lVar7 + 0xc0) = 0;
      *(undefined8 *)(lVar7 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x248) = 0;
      uVar6 = 1;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
    }
    else {
      uVar6 = FUN_004c40f0(param_1);
      iVar4 = FUN_004d88f0(param_1,auStack_34,&local_38,0);
      if (iVar4 == 0) {
        iVar4 = FUN_00407950(uVar6);
        if (0 < iVar4) {
          iVar4 = 0;
          iVar1 = 0xff00;
          if (local_38 != 0x100) {
            iVar1 = local_38;
          }
          do {
            lVar7 = FUN_00407970(uVar6,iVar4);
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
              if ((*(int *)(lVar7 + 0x2c) <= local_38) && (local_38 <= *(int *)(lVar7 + 0x30))) {
LAB_004d8800:
                if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0) ||
                   (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) {
                  piVar8 = (int *)(*(long *)(param_1 + 0x728) + 0x7c);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar3) {
                      *piVar8 = *piVar8 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                else {
                  piVar8 = (int *)(*(long *)(param_1 + 0x598) + 0x80);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar3) {
                      *piVar8 = *piVar8 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x2a0) = 0;
                }
                return 1;
              }
            }
            else {
              iVar5 = 0xff00;
              if (*(int *)(lVar7 + 0x34) != 0x100) {
                iVar5 = *(int *)(lVar7 + 0x34);
              }
              if (iVar1 <= iVar5) {
                iVar5 = 0xff00;
                if (*(int *)(lVar7 + 0x38) != 0x100) {
                  iVar5 = *(int *)(lVar7 + 0x38);
                }
                if (iVar5 <= iVar1) goto LAB_004d8800;
              }
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_00407950(uVar6);
          } while (iVar4 < iVar5);
        }
        FUN_004c99a0(param_1,0x28,0x1fc,0xb5,"external/openssl/ssl/statem/statem_lib.c",0x80);
        FUN_00402170(1,"No ciphers enabled for max supported SSL/TLS version");
        uVar6 = 0;
      }
      else {
        FUN_004c99a0(param_1,0x50,0x1fc,0x44,"external/openssl/ssl/statem/statem_lib.c",0x6e);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}


