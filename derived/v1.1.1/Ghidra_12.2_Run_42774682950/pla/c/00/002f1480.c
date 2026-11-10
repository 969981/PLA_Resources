/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f1480; name: FUN_002f1480
 */


char * FUN_002f1480(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  char *pcVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined *puVar10;
  void *__base;
  size_t __nmemb;
  undefined8 *puVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  char *pcVar17;
  ulong local_78;
  ulong local_70;
  char *local_68;
  
  if (param_1 == 0) {
    return "\"No Error\"";
  }
  if (param_1 == 4) {
    return "\"Cancelled\"";
  }
  if (param_1 == 2) {
    return "\"Out of memory\"";
  }
  plVar1 = (long *)(param_1 + 8);
  if ((char *)*plVar1 != (char *)0x0) {
    return (char *)*plVar1;
  }
  __base = (void *)0x0;
  __nmemb = 0;
  uVar14 = 0;
  uVar15 = 0;
  bVar5 = *(byte *)(param_1 + 0x10);
  do {
    if ((ulong)bVar5 != 0xff) {
      pcVar7 = "errno";
      switch(uVar15 & 0xffffffff) {
      case 0:
        break;
      case 1:
        pcVar7 = "file_line";
        break;
      case 2:
        pcVar7 = "stream_id";
        break;
      case 3:
        pcVar7 = "grpc_status";
        break;
      case 4:
        pcVar7 = "offset";
        break;
      case 5:
        pcVar7 = "index";
        break;
      case 6:
        pcVar7 = "size";
        break;
      case 7:
        pcVar7 = "http2_error";
        break;
      case 8:
        pcVar7 = "tsi_code";
        break;
      case 9:
        pcVar7 = "security_status";
        break;
      case 10:
        pcVar7 = "wsa_error";
        break;
      case 0xb:
        pcVar7 = "fd";
        break;
      case 0xc:
        pcVar7 = "http_status";
        break;
      case 0xd:
        pcVar7 = "limit";
        break;
      case 0xe:
        pcVar7 = "occurred_during_write";
        break;
      case 0xf:
        pcVar7 = "channel_connectivity_state";
        break;
      case 0x10:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x4f,2,
                     "Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      default:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x51,2,
                     "Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar8 = FUN_002ec2d0(pcVar7);
      FUN_002f4490(&local_68,&DAT_038aa48e,*(undefined8 *)(param_1 + (ulong)bVar5 * 8 + 0x38));
      pcVar7 = local_68;
      if (__nmemb == uVar14) {
        uVar14 = __nmemb * 3 >> 1;
        if (__nmemb * 3 < 10) {
          uVar14 = 4;
        }
        __base = (void *)FUN_002ebdc0(__base,uVar14 << 4);
      }
      puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
      __nmemb = __nmemb + 1;
      *puVar11 = uVar8;
      puVar11[1] = pcVar7;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 0x10) break;
    bVar5 = *(byte *)(param_1 + uVar15 + 0x10);
  } while( true );
  uVar15 = 0;
  bVar5 = *(byte *)(param_1 + 0x20);
  do {
    if ((ulong)bVar5 != 0xff) {
      pcVar7 = "key";
      switch(uVar15 & 0xffffffff) {
      case 0:
        pcVar7 = "description";
        break;
      case 1:
        pcVar7 = "file";
        break;
      case 2:
        pcVar7 = "os_error";
        break;
      case 3:
        pcVar7 = "syscall";
        break;
      case 4:
        pcVar7 = "target_address";
        break;
      case 5:
        pcVar7 = "grpc_message";
        break;
      case 6:
        pcVar7 = "raw_bytes";
        break;
      case 7:
        pcVar7 = "tsi_error";
        break;
      case 8:
        pcVar7 = "filename";
        break;
      case 9:
        pcVar7 = "queued_buffers";
        break;
      case 10:
        break;
      case 0xb:
        pcVar7 = "value";
        break;
      case 0xc:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x6f,2,
                     "Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      default:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x71,2,
                     "Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar8 = FUN_002ec2d0(pcVar7);
      lVar3 = param_1 + (ulong)bVar5 * 8;
      local_70 = 0;
      local_68 = (char *)0x0;
      local_78 = 0;
      bVar6 = *(long *)(lVar3 + 0x38) != 0;
      lVar4 = lVar3 + 0x41;
      if (bVar6) {
        lVar4 = *(long *)(lVar3 + 0x48);
      }
      uVar13 = *(ulong *)(lVar3 + 0x40) & 0xff;
      if (bVar6) {
        uVar13 = *(ulong *)(lVar3 + 0x40);
      }
      FUN_002f1fa0(lVar4,uVar13,&local_68,&local_70,&local_78);
      if (local_70 == local_78) {
        local_78 = 8;
        if (0xf < local_70 * 3) {
          local_78 = local_70 * 3 >> 1;
        }
        pcVar7 = (char *)FUN_002ebdc0(local_68);
        pcVar7[local_70] = '\0';
      }
      else {
        local_68[local_70] = '\0';
        pcVar7 = local_68;
      }
      local_68 = pcVar7;
      if (__nmemb == uVar14) {
        uVar14 = __nmemb * 3 >> 1;
        if (__nmemb * 3 < 10) {
          uVar14 = 4;
        }
        __base = (void *)FUN_002ebdc0(__base,uVar14 << 4);
      }
      puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
      __nmemb = __nmemb + 1;
      *puVar11 = uVar8;
      puVar11[1] = pcVar7;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 0xc) break;
    bVar5 = *(byte *)(param_1 + uVar15 + 0x20);
  } while( true );
  bVar5 = *(byte *)(param_1 + 0x2c);
  if ((ulong)bVar5 != 0xff) {
    uVar8 = FUN_002ec2d0("created");
    lVar3 = param_1 + (ulong)bVar5 * 8;
    lVar4 = *(long *)(lVar3 + 0x40);
    if ((uint)((ulong)lVar4 >> 0x20) < 4) {
      puVar10 = (&PTR_s__monotonic__041530e0)[lVar4 >> 0x20];
    }
    else {
      puVar10 = &DAT_0396757d;
    }
    FUN_002f4490(&local_68,"\"%s%ld.%09d\"",puVar10,*(undefined8 *)(lVar3 + 0x38));
    pcVar7 = local_68;
    if (__nmemb == uVar14) {
      uVar14 = __nmemb * 3 >> 1;
      if (__nmemb * 3 < 10) {
        uVar14 = 4;
      }
      __base = (void *)FUN_002ebdc0(__base,uVar14 << 4);
    }
    puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
    __nmemb = __nmemb + 1;
    *puVar11 = uVar8;
    puVar11[1] = pcVar7;
  }
  if (*(char *)(param_1 + 0x2d) != -1) {
    uVar8 = FUN_002ec2d0("referenced_errors");
    local_78 = 8;
    local_68 = (char *)FUN_002ebdc0(0,8);
    local_70 = 1;
    *local_68 = '[';
    FUN_002f24b0(param_1,&local_68,&local_70,&local_78);
    uVar15 = local_70;
    if (local_70 == local_78) {
      uVar13 = 8;
      if (0xf < local_70 * 3) {
        uVar13 = local_70 * 3 >> 1;
      }
      local_78 = uVar13;
      local_68 = (char *)FUN_002ebdc0(local_68,uVar13);
    }
    else {
      uVar13 = local_78;
    }
    uVar2 = uVar15 + 1;
    local_68[uVar15] = ']';
    local_70 = uVar2;
    if (uVar2 == uVar13) {
      local_78 = 8;
      if (0xf < uVar13 * 3) {
        local_78 = uVar13 * 3 >> 1;
      }
      local_68 = (char *)FUN_002ebdc0(local_68);
    }
    pcVar7 = local_68;
    local_68[uVar2] = '\0';
    if (__nmemb == uVar14) {
      uVar15 = __nmemb * 0x18 & 0xfffffffffffffff0;
      if (__nmemb * 3 < 10) {
        uVar15 = 0x40;
      }
      __base = (void *)FUN_002ebdc0(__base,uVar15);
    }
    puVar11 = (undefined8 *)((long)__base + __nmemb * 0x10);
    __nmemb = __nmemb + 1;
    *puVar11 = uVar8;
    puVar11[1] = pcVar7;
  }
  qsort(__base,__nmemb,0x10,(__compar_fn_t)&LAB_002f1cc0);
  local_78 = 8;
  local_68 = (char *)FUN_002ebdc0(0,8);
  local_70 = 1;
  *local_68 = '{';
  if (__nmemb != 0) {
    sVar12 = 0;
LAB_002f1a78:
    pcVar7 = *(char **)((long)__base + sVar12 * 0x10);
    sVar9 = strlen(pcVar7);
    FUN_002f1fa0(pcVar7,sVar9,&local_68,&local_70,&local_78);
    free(*(void **)((long)__base + sVar12 * 0x10));
    if (local_70 == local_78) {
      local_78 = 8;
      if (0xf < local_70 * 3) {
        local_78 = local_70 * 3 >> 1;
      }
      local_68 = (char *)FUN_002ebdc0(local_68);
    }
    uVar15 = local_70 + 1;
    local_68[local_70] = ':';
    puVar11 = (undefined8 *)((long)__base + sVar12 * 0x10 + 8);
    pcVar7 = (char *)*puVar11;
    cVar16 = *pcVar7;
    local_70 = uVar15;
    if (cVar16 != '\0') {
      pcVar7 = pcVar7 + 1;
      if (uVar15 != local_78) goto LAB_002f1b50;
      do {
        local_78 = 8;
        if (0xf < local_70 * 3) {
          local_78 = local_70 * 3 >> 1;
        }
        local_68 = (char *)FUN_002ebdc0(local_68);
        pcVar17 = pcVar7;
        while( true ) {
          uVar15 = local_70 + 1;
          local_68[local_70] = cVar16;
          pcVar7 = pcVar17 + 1;
          cVar16 = *pcVar17;
          local_70 = uVar15;
          if (cVar16 == '\0') {
            pcVar7 = (char *)*puVar11;
            goto LAB_002f1a20;
          }
          if (uVar15 == local_78) break;
LAB_002f1b50:
          local_70 = uVar15;
          pcVar17 = pcVar7;
        }
      } while( true );
    }
LAB_002f1a20:
    free(pcVar7);
    sVar12 = sVar12 + 1;
    if (sVar12 != __nmemb) {
      if (sVar12 != 0) {
        if (local_70 == local_78) {
          local_78 = 8;
          if (0xf < local_70 * 3) {
            local_78 = local_70 * 3 >> 1;
          }
          local_68 = (char *)FUN_002ebdc0(local_68);
        }
        local_68[local_70] = ',';
        local_70 = local_70 + 1;
      }
      goto LAB_002f1a78;
    }
  }
  if (local_70 == local_78) {
    local_78 = 8;
    if (0xf < local_70 * 3) {
      local_78 = local_70 * 3 >> 1;
    }
    local_68 = (char *)FUN_002ebdc0(local_68);
    uVar15 = local_70;
  }
  else {
    uVar15 = local_70;
  }
  local_70 = uVar15 + 1;
  local_68[uVar15] = '}';
  if (local_70 == local_78) {
    local_78 = 8;
    if (0xf < local_70 * 3) {
      local_78 = local_70 * 3 >> 1;
    }
    local_68 = (char *)FUN_002ebdc0(local_68);
  }
  local_68[local_70] = '\0';
  local_70 = local_70 + 1;
  free(__base);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      free(local_68);
      return (char *)*plVar1;
    }
    cVar16 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = (long)local_68;
      cVar16 = ExclusiveMonitorsStatus();
    }
  } while (cVar16 != '\0');
  return local_68;
}


