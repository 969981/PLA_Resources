/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ef204; name: FUN_003ef204
 */


void FUN_003ef204(int *param_1,undefined4 *param_2)

{
  long lVar1;
  byte bVar2;
  size_t __n;
  undefined1 *__dest;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  ulong local_78;
  size_t local_70;
  undefined1 *local_68;
  
  switch(*param_2) {
  case 0:
    local_70 = 0;
    local_68 = (undefined1 *)0x0;
    local_78 = 0x6c6c756e08;
                    /* try { // try from 003ef26c to 003ef277 has its CatchHandler @ 003efd14 */
    FUN_003efd48(param_1,&local_78);
    break;
  case 1:
    local_70 = 0;
    local_68 = (undefined1 *)0x0;
    local_78 = 0x6575727408;
                    /* try { // try from 003ef340 to 003ef34b has its CatchHandler @ 003efcf4 */
    FUN_003efd48(param_1,&local_78);
    break;
  case 2:
    local_70 = 0;
    local_68 = (undefined1 *)0x0;
    local_78 = 0x65736c61660a;
                    /* try { // try from 003ef2e8 to 003ef2f3 has its CatchHandler @ 003efd04 */
    FUN_003efd48(param_1,&local_78);
    break;
  case 3:
    FUN_003efd48(param_1,param_2 + 2);
    return;
  case 4:
    if (*(char *)((long)param_1 + 9) != '\0') goto LAB_003ef58c;
    if ((char)param_1[2] == '\0') {
      puVar7 = (ulong *)(param_1 + 4);
      bVar2 = (byte)*puVar7;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x16) goto LAB_003ef464;
      }
      else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef464:
        if ((bVar2 & 1) == 0) {
          lVar3 = 0x116;
        }
        else {
          lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
        }
        FUN_0030ff7c(puVar7,lVar3);
      }
      FUN_002e6a9c(puVar7,0x2c);
      if (*param_1 == 0) goto LAB_003ef58c;
      bVar2 = (byte)*puVar7;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x16) goto LAB_003ef568;
      }
      else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef568:
        if ((bVar2 & 1) == 0) goto LAB_003ef4c8;
LAB_003ef56c:
        lVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
        goto LAB_003ef578;
      }
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      if ((*param_1 == 0) || (param_1[1] == 0)) goto LAB_003ef58c;
      bVar2 = *(byte *)(param_1 + 4);
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x16) goto LAB_003ef4c4;
      }
      else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef4c4:
        if ((bVar2 & 1) != 0) goto LAB_003ef56c;
LAB_003ef4c8:
        lVar3 = 0x116;
LAB_003ef578:
        FUN_0030ff7c(param_1 + 4,lVar3);
      }
    }
    FUN_002e6a9c(param_1 + 4,10);
LAB_003ef58c:
    FUN_003eff60(param_1);
    FUN_003f0154(param_1,param_2 + 2);
    *(undefined1 *)((long)param_1 + 9) = 0;
    return;
  case 5:
    if (*(char *)((long)param_1 + 9) == '\0') {
      if ((char)param_1[2] == '\0') {
        puVar7 = (ulong *)(param_1 + 4);
        bVar2 = (byte)*puVar7;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x16) goto LAB_003ef484;
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef484:
          if ((bVar2 & 1) == 0) {
            lVar3 = 0x116;
          }
          else {
            lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar7,lVar3);
        }
        FUN_002e6a9c(puVar7,0x2c);
        if (*param_1 != 0) {
          bVar2 = (byte)*puVar7;
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 0x16) goto LAB_003ef600;
          }
          else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef600:
            if ((bVar2 & 1) == 0) goto LAB_003ef4e8;
LAB_003ef604:
            lVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
            goto LAB_003ef610;
          }
          goto LAB_003ef618;
        }
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
        if ((*param_1 != 0) && (param_1[1] != 0)) {
          bVar2 = *(byte *)(param_1 + 4);
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 0x16) goto LAB_003ef4e4;
          }
          else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef4e4:
            if ((bVar2 & 1) != 0) goto LAB_003ef604;
LAB_003ef4e8:
            lVar3 = 0x116;
LAB_003ef610:
            FUN_0030ff7c(param_1 + 4,lVar3);
          }
LAB_003ef618:
          FUN_002e6a9c(param_1 + 4,10);
        }
      }
    }
    FUN_003eff60(param_1);
    puVar7 = (ulong *)(param_1 + 4);
    bVar2 = (byte)*puVar7;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x16) goto LAB_003ef648;
    }
    else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef648:
      if ((bVar2 & 1) == 0) {
        lVar3 = 0x116;
      }
      else {
        lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
      }
      FUN_0030ff7c(puVar7,lVar3);
    }
    FUN_002e6a9c(puVar7,0x7b);
    *(undefined2 *)(param_1 + 2) = 1;
    param_1[1] = param_1[1] + 1;
    plVar8 = *(long **)(param_2 + 8);
    if (plVar8 != (long *)(param_2 + 10)) {
      pbVar10 = (byte *)(plVar8 + 4);
      if ((*pbVar10 & 1) == 0) goto LAB_003ef6e4;
LAB_003ef6ec:
      pbVar10 = (byte *)plVar8[6];
      plVar9 = plVar8;
      do {
        local_70 = 0;
        local_68 = (undefined1 *)0x0;
        local_78 = 0;
        __n = strlen((char *)pbVar10);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
          __dest = (undefined1 *)((ulong)&local_78 | 1);
          if (__n != 0) goto LAB_003ef790;
          *(undefined1 *)((ulong)&local_78 | 1) = 0;
          if ((char)param_1[2] != '\0') goto LAB_003ef730;
LAB_003ef7ac:
          bVar2 = (byte)*puVar7;
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 0x16) goto LAB_003ef7c4;
          }
          else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef7c4:
            if ((bVar2 & 1) == 0) {
              lVar3 = 0x116;
            }
            else {
              lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
            }
                    /* try { // try from 003ef80c to 003ef917 has its CatchHandler @ 003efd24 */
            FUN_0030ff7c(puVar7,lVar3);
          }
          FUN_002e6a9c(puVar7,0x2c);
          if (*param_1 != 0) {
            bVar2 = (byte)*puVar7;
            if ((bVar2 & 1) == 0) {
              if (bVar2 >> 1 == 0x16) goto LAB_003ef840;
            }
            else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef840:
              if ((bVar2 & 1) == 0) {
                lVar3 = 0x116;
              }
              else {
                lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
              }
              FUN_0030ff7c(puVar7,lVar3);
            }
            FUN_002e6a9c(puVar7,10);
          }
        }
        else {
          uVar6 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
          local_78 = uVar6 | 1;
          local_70 = __n;
          local_68 = __dest;
LAB_003ef790:
          memcpy(__dest,pbVar10,__n);
          __dest[__n] = 0;
          if ((char)param_1[2] == '\0') goto LAB_003ef7ac;
LAB_003ef730:
          *(undefined1 *)(param_1 + 2) = 0;
          if ((*param_1 != 0) && (param_1[1] != 0)) {
            bVar2 = (byte)*puVar7;
            if ((bVar2 & 1) == 0) {
              if (bVar2 >> 1 == 0x16) goto LAB_003ef75c;
            }
            else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef75c:
              if ((bVar2 & 1) == 0) {
                lVar3 = 0x116;
              }
              else {
                lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
              }
              FUN_0030ff7c(puVar7,lVar3);
            }
            FUN_002e6a9c(puVar7,10);
          }
        }
        FUN_003eff60(param_1);
        FUN_003f0154(param_1,&local_78);
        bVar2 = (byte)*puVar7;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x16) goto LAB_003ef8d4;
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef8d4:
          if ((bVar2 & 1) == 0) {
            lVar3 = 0x116;
          }
          else {
            lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar7,lVar3);
        }
        FUN_002e6a9c(puVar7,0x3a);
        *(undefined1 *)((long)param_1 + 9) = 1;
        if ((local_78 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_68);
        }
        FUN_003ef204(param_1,plVar9 + 7);
        plVar5 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar5 = plVar9 + 2;
          plVar8 = (long *)*plVar5;
          if ((long *)*plVar8 != plVar9) {
            do {
              lVar3 = *plVar5;
              plVar5 = (long *)(lVar3 + 0x10);
              plVar8 = (long *)*plVar5;
            } while (*plVar8 != lVar3);
          }
        }
        else {
          do {
            plVar8 = plVar5;
            plVar5 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        if (plVar8 == (long *)(param_2 + 10)) break;
        pbVar10 = (byte *)(plVar8 + 4);
        if ((*pbVar10 & 1) != 0) goto LAB_003ef6ec;
LAB_003ef6e4:
        pbVar10 = pbVar10 + 1;
        plVar9 = plVar8;
      } while( true );
    }
    if (*param_1 == 0) {
LAB_003efa40:
      param_1[1] = param_1[1] + -1;
      if ((char)param_1[2] == '\0') {
        FUN_003eff60(param_1);
        bVar2 = (byte)*puVar7;
        goto joined_r0x003efa80;
      }
      uVar6 = (ulong)(byte)*puVar7;
      if (((byte)*puVar7 & 1) == 0) goto LAB_003efa5c;
LAB_003ef9ac:
      if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef9c0:
        if ((uVar6 & 1) == 0) {
          lVar3 = 0x116;
        }
        else {
          lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
        }
        FUN_0030ff7c(puVar7,lVar3);
      }
    }
    else {
      if ((char)param_1[2] == '\0') {
        bVar2 = (byte)*puVar7;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x16) goto LAB_003efa14;
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003efa14:
          if ((bVar2 & 1) == 0) {
            lVar3 = 0x116;
          }
          else {
            lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar7,lVar3);
        }
        FUN_002e6a9c(puVar7,10);
        goto LAB_003efa40;
      }
      param_1[1] = param_1[1] + -1;
      bVar2 = (byte)*puVar7;
joined_r0x003efa80:
      uVar6 = (ulong)bVar2;
      if ((bVar2 & 1) != 0) goto LAB_003ef9ac;
LAB_003efa5c:
      if (uVar6 >> 1 == 0x16) goto LAB_003ef9c0;
    }
    uVar4 = 0x7d;
LAB_003efc8c:
    FUN_002e6a9c(param_1 + 4,uVar4);
    *(undefined2 *)(param_1 + 2) = 0;
    return;
  case 6:
    if (*(char *)((long)param_1 + 9) == '\0') {
      if ((char)param_1[2] == '\0') {
        puVar7 = (ulong *)(param_1 + 4);
        bVar2 = (byte)*puVar7;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x16) goto LAB_003ef4a4;
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef4a4:
          if ((bVar2 & 1) == 0) {
            lVar3 = 0x116;
          }
          else {
            lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar7,lVar3);
        }
        FUN_002e6a9c(puVar7,0x2c);
        if (*param_1 != 0) {
          bVar2 = (byte)*puVar7;
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 0x16) goto LAB_003efae0;
          }
          else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003efae0:
            if ((bVar2 & 1) == 0) goto LAB_003ef508;
LAB_003efae4:
            lVar3 = (*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) + 0xff;
            goto LAB_003efaf0;
          }
          goto LAB_003efaf8;
        }
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
        if ((*param_1 != 0) && (param_1[1] != 0)) {
          bVar2 = *(byte *)(param_1 + 4);
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 0x16) goto LAB_003ef504;
          }
          else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003ef504:
            if ((bVar2 & 1) != 0) goto LAB_003efae4;
LAB_003ef508:
            lVar3 = 0x116;
LAB_003efaf0:
            FUN_0030ff7c(param_1 + 4,lVar3);
          }
LAB_003efaf8:
          FUN_002e6a9c(param_1 + 4,10);
        }
      }
    }
    FUN_003eff60(param_1);
    puVar7 = (ulong *)(param_1 + 4);
    bVar2 = (byte)*puVar7;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x16) goto LAB_003efb28;
    }
    else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003efb28:
      if ((bVar2 & 1) == 0) {
        lVar3 = 0x116;
      }
      else {
        lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
      }
      FUN_0030ff7c(puVar7,lVar3);
    }
    FUN_002e6a9c(puVar7,0x5b);
    *(undefined2 *)(param_1 + 2) = 1;
    param_1[1] = param_1[1] + 1;
    lVar1 = *(long *)(param_2 + 0x10);
    for (lVar3 = *(long *)(param_2 + 0xe); lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
      FUN_003ef204(param_1,lVar3);
    }
    if (*param_1 == 0) {
LAB_003efc5c:
      param_1[1] = param_1[1] + -1;
      if ((char)param_1[2] == '\0') {
        FUN_003eff60(param_1);
        bVar2 = (byte)*puVar7;
        goto joined_r0x003efcc4;
      }
      uVar6 = (ulong)(byte)*puVar7;
      if (((byte)*puVar7 & 1) == 0) goto LAB_003efc78;
LAB_003efbc8:
      if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003efbdc:
        if ((uVar6 & 1) == 0) {
          lVar3 = 0x116;
        }
        else {
          lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
        }
        FUN_0030ff7c(puVar7,lVar3);
      }
    }
    else {
      if ((char)param_1[2] == '\0') {
        bVar2 = (byte)*puVar7;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x16) goto LAB_003efc30;
        }
        else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 6)) {
LAB_003efc30:
          if ((bVar2 & 1) == 0) {
            lVar3 = 0x116;
          }
          else {
            lVar3 = (*puVar7 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar7,lVar3);
        }
        FUN_002e6a9c(puVar7,10);
        goto LAB_003efc5c;
      }
      param_1[1] = param_1[1] + -1;
      bVar2 = (byte)*puVar7;
joined_r0x003efcc4:
      uVar6 = (ulong)bVar2;
      if ((bVar2 & 1) != 0) goto LAB_003efbc8;
LAB_003efc78:
      if (uVar6 >> 1 == 0x16) goto LAB_003efbdc;
    }
    uVar4 = 0x5d;
    goto LAB_003efc8c;
  default:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/json/json_writer.cc",0x141,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
}


