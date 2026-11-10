/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00104fc0; name: FUN_00104fc0
 */


/* WARNING: Control flow encountered bad instruction data */

ulong FUN_00104fc0(long param_1,long param_2,long param_3,long param_4,int param_5,
                  undefined4 param_6,int param_7,long param_8,ulong param_9,code *param_10,
                  undefined8 param_11,undefined1 *param_12,code *param_13,int param_14)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  code *pcVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_9c;
  code *local_98;
  int local_8c;
  ulong local_88;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_64;
  
  puVar3 = &local_b0;
  puVar2 = &local_b0;
  uVar12 = 0xffffffffffffffff;
  if (*(code **)PTR_DAT_04372300 != (code *)0x0) {
    uVar12 = (**(code **)PTR_DAT_04372300)("OodleLZ_Decompress",0);
  }
  if (param_3 != 0) {
    if (param_1 == 0) {
      FUN_0010a430();
      pcVar9 = *(code **)PTR_PTR_043722f8;
      if (pcVar9 != (code *)0x0) {
        pcVar7 = "OODLE ERROR : bad parameter : compBuf != 0L\n";
        uVar6 = 0x6af;
        goto LAB_00105098;
      }
      goto LAB_001050a0;
    }
    if (param_4 == 0) {
      FUN_0010a430();
      pcVar9 = *(code **)PTR_PTR_043722f8;
      if (pcVar9 != (code *)0x0) {
        pcVar7 = "OODLE ERROR : OodleLZ_Decompress: asked for len 0\n";
        uVar6 = 0x6b3;
        goto LAB_00105098;
      }
      goto LAB_001050a0;
    }
    if (param_8 == 0) {
      uVar15 = 0;
      param_8 = param_3;
    }
    else {
      uVar15 = param_3 - param_8;
      if ((uVar15 & 0x3ffff) != 0) {
        FUN_0010a430();
        pcVar9 = *(code **)PTR_PTR_043722f8;
        if (pcVar9 != (code *)0x0) {
          pcVar7 = 
          "OODLE ERROR : OodleLZ_Decompress: dictionary backup distance must be a multiple of OODLELZ_BLOCK_LEN\n"
          ;
          uVar6 = 0x6cc;
          goto LAB_00105098;
        }
        goto LAB_001050a0;
      }
    }
    uVar11 = uVar15 + param_4;
    local_88 = uVar11;
    if (0 < (long)param_9) {
      local_88 = param_9;
    }
    local_80 = param_6;
    local_7c = param_5;
    uVar4 = FUN_001056b0(param_1,param_2,param_4);
    if (uVar4 == 0xffffffff) goto LAB_001050a4;
    if ((local_7c == 1) && ((0x3f10U >> (ulong)(uVar4 & 0x1f) & 1) == 0)) {
      FUN_0010a430();
      pcVar9 = *(code **)PTR_PTR_043722f8;
      if (pcVar9 != (code *)0x0) {
        pcVar7 = 
        "OODLE ERROR : OodleLZ_Decompress: Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n"
        ;
        uVar6 = 0x6e4;
        goto LAB_00105098;
      }
      goto LAB_001050a0;
    }
    local_98 = param_13;
    local_9c = 3;
    local_a8 = uVar12;
    local_8c = param_7;
    if ((param_14 == 0) || (param_14 == 3)) {
LAB_0010518c:
      iVar5 = FUN_00103910(uVar4,uVar11,&local_64);
      if (param_12 == (undefined1 *)0x0) {
        if (iVar5 < *(int *)PTR_DAT_04372310) {
          pcVar9 = (code *)(long)(iVar5 + 0x10);
          puVar2 = (undefined8 *)((long)&local_b0 - ((ulong)(pcVar9 + 0xf) & 0xfffffffffffffff0));
          param_12 = (undefined1 *)puVar2;
          goto LAB_0010527c;
        }
        FUN_0013e2a0();
        pcVar9 = (code *)(long)iVar5;
        puVar10 = (ulong *)(**(code **)PTR_PTR_04372318)(pcVar9,0x10);
        if (puVar10 == (ulong *)0x0) {
          FUN_0010a3b0(pcVar9);
        }
        FUN_0010a1f0(puVar10,0x98);
        *(undefined4 *)((long)puVar10 + 0x2c) = 1;
      }
      else {
        pcVar9 = local_98;
        if ((long)local_98 < (long)(iVar5 + 0x10)) {
          FUN_0010a430();
          pcVar9 = *(code **)PTR_PTR_043722f8;
          if (pcVar9 != (code *)0x0) {
            pcVar7 = "OODLE ERROR : OodleLZ_Decompress : decoder memory given, but too small!\n";
            uVar12 = 0x714;
            goto LAB_00105304;
          }
          goto LAB_001055bc;
        }
LAB_0010527c:
        FUN_0013e2a0();
        pcVar9 = pcVar9 + -0x10;
        puVar10 = (ulong *)((ulong)(param_12 + 0xf) & 0xfffffffffffffff0);
        FUN_0010a1f0(puVar10,0x98);
        puVar3 = puVar2;
      }
      uVar14 = 0x3fffffffffffffff;
      if (-1 < (long)uVar11) {
        uVar14 = uVar11;
      }
      *puVar10 = uVar15;
      puVar10[1] = uVar14;
      puVar10[2] = 0xffffffffffffffff;
      puVar10[3] = 0;
      *(undefined4 *)(puVar10 + 5) = 0;
      puVar10[4] = 0xabadf00dc0cac01a;
      *(int *)(puVar10 + 9) = local_64;
      *(int *)((long)puVar10 + 0x4c) = (int)pcVar9;
      puVar10[10] = (ulong)(puVar10 + 0x13);
      puVar10[0xb] = (long)pcVar9 - (long)local_64;
      if (0 < (long)uVar15) {
        puVar10[3] = 0;
      }
      uVar14 = uVar15;
      if ((long)uVar15 < (long)uVar11) {
        local_b0 = param_11;
        uVar13 = 0;
        local_98 = param_10;
        if (local_8c < 3) {
          do {
            uVar1 = local_88;
            if (param_2 <= (long)uVar13) goto LAB_001055dc;
            lVar8 = local_88 - uVar14;
            *(int *)((long)puVar3 + -8) = local_9c;
            *(int *)((long)puVar3 + -0x10) = local_8c;
            *(undefined4 *)((long)puVar3 + -0x18) = local_80;
            *(int *)((long)puVar3 + -0x20) = local_7c;
            iVar5 = FUN_00103a80(puVar10,&local_78,param_8,uVar14,uVar1,lVar8,param_1 + uVar13,
                                 param_2 - uVar13);
            if (iVar5 == 0) break;
            if (local_78 == 0) goto LAB_00105608;
            uVar14 = uVar14 + (long)local_78;
            uVar13 = uVar13 + (long)local_74;
            if (local_98 != (code *)0x0) {
              iVar5 = (*local_98)(local_b0,param_3,param_4,param_1,param_2,uVar14 - uVar15,uVar13);
              if (iVar5 == 1) break;
            }
          } while ((long)uVar14 < (long)uVar11);
        }
        else {
          do {
            if (param_2 <= (long)uVar13) goto LAB_001055dc;
            if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
              (**(code **)PTR_PTR_043722f8)
                        (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x732,
                         "OodleLZ_Decompress about to DecodeSome, starting at comp %d -> raw %d\n",
                         uVar13 & 0xffffffff,uVar14 & 0xffffffff);
            }
            uVar1 = local_88;
            lVar8 = local_88 - uVar14;
            *(int *)((long)puVar3 + -8) = local_9c;
            *(int *)((long)puVar3 + -0x10) = local_8c;
            *(undefined4 *)((long)puVar3 + -0x18) = local_80;
            *(int *)((long)puVar3 + -0x20) = local_7c;
            iVar5 = FUN_00103a80(puVar10,&local_78,param_8,uVar14,uVar1,lVar8,param_1 + uVar13,
                                 param_2 - uVar13);
            if (iVar5 == 0) break;
            if (local_78 == 0) goto LAB_00105608;
            uVar14 = uVar14 + (long)local_78;
            uVar13 = uVar13 + (long)local_74;
            if (local_98 != (code *)0x0) {
              iVar5 = (*local_98)(local_b0,param_3,param_4,param_1,param_2,uVar14 - uVar15,uVar13);
              if (iVar5 == 1) break;
            }
          } while ((long)uVar14 < (long)uVar11);
        }
      }
      iVar5 = *(int *)((long)puVar10 + 0x2c);
      goto joined_r0x00105640;
    }
    if ((1 < param_14 - 1U) &&
       (iVar5 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6f3,
                             "OodleLZ_Decompress",
                             "threadPhase == OodleLZ_Decode_ThreadPhase1 || threadPhase == OodleLZ_Decode_ThreadPhase2"
                            ), iVar5 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((0x3b00U >> (ulong)(uVar4 & 0x1f) & 1) == 0) {
      FUN_0010a430();
      pcVar9 = *(code **)PTR_PTR_043722f8;
      if (pcVar9 != (code *)0x0) {
        pcVar7 = 
        "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but !OodleLZ_Compressor_CanDecodeThreadPhased\n"
        ;
        uVar12 = 0x6f7;
        goto LAB_00105304;
      }
    }
    else {
      if (param_12 != (undefined1 *)0x0) {
        iVar5 = FUN_00103910(0xd,0,0);
        local_9c = param_14;
        if ((long)(iVar5 + 0x6d030) <= (long)local_98) goto LAB_0010518c;
      }
      FUN_0010a430();
      pcVar9 = *(code **)PTR_PTR_043722f8;
      if (pcVar9 != (code *)0x0) {
        pcVar7 = 
        "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but decoderMemory < OodleLZ_ThreadPhased_BlockDecoderMemorySizeNeeded\n"
        ;
        uVar12 = 0x6fd;
LAB_00105304:
        (*pcVar9)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar12,pcVar7);
      }
    }
    goto LAB_001055bc;
  }
  FUN_0010a430();
  pcVar9 = *(code **)PTR_PTR_043722f8;
  if (pcVar9 != (code *)0x0) {
    pcVar7 = "OODLE ERROR : bad parameter : decodeTo != 0L\n";
    uVar6 = 0x6ae;
LAB_00105098:
    (*pcVar9)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar6,pcVar7);
  }
LAB_001050a0:
  FUN_0010a450();
LAB_001050a4:
  uVar11 = 0;
  pcVar9 = *(code **)PTR_DAT_04372308;
  if (pcVar9 == (code *)0x0) {
    return 0;
  }
  goto LAB_001050b8;
LAB_001055dc:
  FUN_0010a430();
  pcVar9 = *(code **)PTR_PTR_043722f8;
  if (pcVar9 != (code *)0x0) {
    pcVar7 = "OODLE ERROR : LZ corruption : OodleLZ_Decompress not enough comp buf\n";
    uVar12 = 0x72c;
    goto LAB_00105630;
  }
  goto LAB_00105638;
LAB_00105608:
  FUN_0010a430();
  pcVar9 = *(code **)PTR_PTR_043722f8;
  if (pcVar9 != (code *)0x0) {
    pcVar7 = "OODLE ERROR : LZ corruption : OodleLZ_Decompress : DecodeSome wanted more comp data\n"
    ;
    uVar12 = 0x745;
LAB_00105630:
    (*pcVar9)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar12,pcVar7);
  }
LAB_00105638:
  FUN_0010a450();
  iVar5 = *(int *)((long)puVar10 + 0x2c);
joined_r0x00105640:
  if (iVar5 != 0) {
    (**(code **)PTR_PTR_04372320)(puVar10);
  }
  if (uVar14 != uVar11) {
    FUN_0010a430();
    if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
      (**(code **)PTR_PTR_043722f8)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x75d,
                 "OODLE ERROR : LZ corruption : OodleLZ_Decompress failed (%d != %d)\n",
                 uVar14 & 0xffffffff,uVar11 & 0xffffffff);
    }
LAB_001055bc:
    FUN_0010a450();
    uVar11 = 0;
  }
  pcVar9 = *(code **)PTR_DAT_04372308;
  uVar12 = local_a8;
  if (pcVar9 != (code *)0x0) {
LAB_001050b8:
    (*pcVar9)(uVar12);
  }
  return uVar11;
}


