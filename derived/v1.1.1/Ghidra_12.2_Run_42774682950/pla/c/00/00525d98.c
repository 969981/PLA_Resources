/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00525d98; name: FUN_00525d98
 */


void FUN_00525d98(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  pcVar1 = *(char **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (*pcVar1 != '\0') {
    FUN_00534b10(param_1,param_2);
  }
  puVar5 = PTR_DAT_04374b48;
  uVar7 = *(ulong *)(lVar2 + 0x198);
  if (uVar7 == 0) {
    bVar3 = *(byte *)(param_2 + 0x10);
    if ((bVar3 >> 6 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 8);
      if ((bVar3 & 1) == 0) {
        if ((bVar3 >> 2 & 1) != 0) {
          lVar10 = 1;
          cVar4 = PTR_DAT_04374b48[0x10];
          goto joined_r0x00525e1c;
        }
        if ((bVar3 >> 1 & 1) == 0) {
          if ((bVar3 >> 3 & 1) == 0) {
            if ((bVar3 >> 4 & 1) == 0) {
              if ((bVar3 >> 5 & 1) == 0) {
                FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                             ,0x961,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar10 = 5;
              cVar4 = PTR_DAT_04374b48[0x10];
              goto joined_r0x00525e1c;
            }
            lVar10 = 4;
            cVar4 = PTR_DAT_04374b48[0x10];
          }
          else {
            lVar10 = 3;
            cVar4 = PTR_DAT_04374b48[0x10];
          }
        }
        else {
          lVar10 = 2;
          cVar4 = PTR_DAT_04374b48[0x10];
        }
        if (cVar4 == '\0') goto LAB_00525e20;
LAB_00525e78:
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0x96a,1,"chand=%p calld=%p: adding pending batch at index %lu",lVar9,lVar2,
                     lVar10);
        lVar10 = lVar2 + lVar10 * 0x10;
        lVar8 = *(long *)(lVar10 + 0x2b8);
      }
      else {
        lVar10 = 0;
        cVar4 = PTR_DAT_04374b48[0x10];
joined_r0x00525e1c:
        if (cVar4 != '\0') goto LAB_00525e78;
LAB_00525e20:
        lVar10 = lVar2 + lVar10 * 0x10;
        lVar8 = *(long *)(lVar10 + 0x2b8);
      }
      if (lVar8 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0x96f,2,"assertion failed: %s","pending->batch == nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar10 + 0x2b8) = param_2;
      *(undefined1 *)(lVar10 + 0x2c0) = 0;
      if ((*(byte *)(lVar2 + 0x318) >> 3 & 1) != 0) {
        bVar3 = *(byte *)(param_2 + 0x10);
        if ((bVar3 & 1) == 0) {
          if ((bVar3 >> 2 & 1) == 0) goto LAB_00525e4c;
LAB_00525efc:
          *(byte *)(lVar2 + 0x318) = *(byte *)(lVar2 + 0x318) | 2;
          *(ulong *)(lVar2 + 800) =
               *(long *)(lVar2 + 800) +
               (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 8) + 0x28) + 8);
          if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) goto LAB_00525f28;
LAB_00525e50:
          if (*(ulong *)(lVar2 + 800) <= *(ulong *)(lVar9 + 8)) goto LAB_00525f44;
        }
        else {
          *(byte *)(lVar2 + 0x318) = *(byte *)(lVar2 + 0x318) | 1;
          lVar10 = FUN_003e0000(**(undefined8 **)(param_2 + 8));
          *(long *)(lVar2 + 800) = *(long *)(lVar2 + 800) + lVar10;
          bVar3 = *(byte *)(param_2 + 0x10);
          if ((bVar3 >> 2 & 1) != 0) goto LAB_00525efc;
LAB_00525e4c:
          if ((bVar3 >> 1 & 1) == 0) goto LAB_00525e50;
LAB_00525f28:
          *(byte *)(lVar2 + 0x318) = *(byte *)(lVar2 + 0x318) | 4;
          if (*(ulong *)(lVar2 + 800) <= *(ulong *)(lVar9 + 8)) goto LAB_00525f44;
        }
        if (puVar5[0x10] == '\0') {
          if (*(long *)(lVar2 + 400) != 0) goto LAB_0052606c;
LAB_00526198:
          uVar6 = 0;
        }
        else {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x987,1,"chand=%p calld=%p: exceeded retry buffer size, committing",lVar9,
                       lVar2);
          if (*(long *)(lVar2 + 400) == 0) goto LAB_00526198;
LAB_0052606c:
          uVar6 = FUN_00536130();
        }
        FUN_00529580(lVar2,param_1,uVar6);
        if (*(int *)(lVar2 + 0x31c) == 0) {
          if (puVar5[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0x994,1,"chand=%p calld=%p: disabling retries before first attempt",lVar9,
                         lVar2);
          }
          *(byte *)(lVar2 + 0x318) = *(byte *)(lVar2 + 0x318) & 0xf7;
          lVar9 = *(long *)(lVar2 + 400);
          goto joined_r0x005261c8;
        }
      }
LAB_00525f44:
      lVar9 = *(long *)(lVar2 + 400);
joined_r0x005261c8:
      if (lVar9 != 0) {
        if (puVar5[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x89b,1,"chand=%p calld=%p: starting batch on subchannel_call=%p",pcVar1,
                       lVar2);
        }
        FUN_00528bc8(lVar2,param_1);
        return;
      }
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        if (puVar5[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x8af,1,"chand=%p calld=%p: saved batch, yielding call combiner",pcVar1,
                       lVar2);
        }
        FUN_003d7088(*(undefined8 *)(lVar2 + 0x128),
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0x8b4,"batch does not include send_initial_metadata");
        return;
      }
      if (puVar5[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0x8a7,1,"chand=%p calld=%p: grabbing data plane mutex to perform pick",pcVar1,
                     lVar2);
      }
      FUN_00529020(param_1,0);
      return;
    }
    uVar7 = *(ulong *)(*(long *)(param_2 + 8) + 0x88);
    if (4 < uVar7) {
      uVar7 = FUN_002f03c0(uVar7,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                           ,0x87d);
    }
    *(ulong *)(lVar2 + 0x198) = uVar7;
    if (PTR_DAT_04374b48[0x10] == '\0') {
      lVar9 = *(long *)(lVar2 + 400);
    }
    else {
      uVar6 = FUN_002f1480();
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x87f,1,"chand=%p calld=%p: recording cancel_error=%s",pcVar1,lVar2,uVar6);
      lVar9 = *(long *)(lVar2 + 400);
    }
    if (lVar9 != 0) {
      FUN_00536038(lVar9,param_2);
      return;
    }
    uVar7 = *(ulong *)(lVar2 + 0x198);
    if (4 < uVar7) {
      uVar7 = FUN_002f03c0(uVar7,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                           ,0x888);
    }
    FUN_0052860c(lVar2,param_1,uVar7,&LAB_00528bc0);
    uVar7 = *(ulong *)(lVar2 + 0x198);
    if (uVar7 < 5) goto LAB_0052614c;
    uVar6 = 0x88c;
  }
  else {
    if (PTR_DAT_04374b48[0x10] != '\0') {
      uVar6 = FUN_002f1480(uVar7);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x86c,1,"chand=%p calld=%p: failing batch with error: %s",pcVar1,lVar2,uVar6);
      uVar7 = *(ulong *)(lVar2 + 0x198);
    }
    if (uVar7 < 5) goto LAB_0052614c;
    uVar6 = 0x871;
  }
  uVar7 = FUN_002f03c0(uVar7,
                       "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,uVar6);
LAB_0052614c:
  FUN_003d5fa0(param_2,uVar7,*(undefined8 *)(lVar2 + 0x128));
  return;
}


