/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006073cc; name: FUN_006073cc
 */


void FUN_006073cc(ulong *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  size_t sVar9;
  void *__dest;
  char *__s;
  ulong uVar10;
  long *__s_00;
  ulong uVar11;
  
  puVar6 = PTR_LAB_04373088;
  puVar5 = PTR_FUN_04373078;
  uVar4 = s_grpc_ssl_target_name_override_039a8b93._21_8_;
  uVar3 = s_grpc_ssl_target_name_override_039a8b93._0_8_;
  if (param_2[1] != *param_2) {
    uVar2 = CONCAT53(s_grpc_ssl_target_name_override_039a8b93._16_5_,
                     s_grpc_ssl_target_name_override_039a8b93._13_3_);
    lVar1 = CONCAT35(s_grpc_ssl_target_name_override_039a8b93._13_3_,
                     s_grpc_ssl_target_name_override_039a8b93._8_5_);
    uVar10 = 0;
    uVar11 = 1;
    do {
      plVar8 = (long *)FUN_002e2e80(puVar5,0x20);
      *(undefined1 *)((long)plVar8 + 0x1d) = 0;
      plVar8[1] = lVar1;
      *plVar8 = uVar3;
      *(undefined8 *)((long)plVar8 + 0x15) = uVar4;
      *(undefined8 *)((long)plVar8 + 0xd) = uVar2;
      __s_00 = *(long **)(*param_2 + uVar10 * 0x20 + 8);
      sVar9 = strlen((char *)__s_00);
      if ((sVar9 == 0x1d) &&
         ((*plVar8 == *__s_00 && plVar8[1] == __s_00[1]) &&
          (plVar8[2] == __s_00[2] &&
          *(long *)((long)plVar8 + 0x15) == *(long *)((long)__s_00 + 0x15)))) {
        FUN_002e2ea0(PTR_LAB_04373088,plVar8);
        __s = *(char **)(*param_2 + uVar10 * 0x20 + 0x10);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        sVar9 = strlen(__s);
        if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar9 < 0x17) {
          __dest = (void *)((long)param_1 + 1);
          *(char *)param_1 = (char)((int)sVar9 << 1);
          if (sVar9 == 0) goto LAB_00607574;
        }
        else {
          uVar10 = sVar9 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
          param_1[1] = sVar9;
          param_1[2] = (ulong)__dest;
          *param_1 = uVar10 | 1;
        }
        memcpy(__dest,__s,sVar9);
LAB_00607574:
        *(undefined1 *)((long)__dest + sVar9) = 0;
        return;
      }
      FUN_002e2ea0(puVar6,plVar8);
      bVar7 = uVar11 < (ulong)(param_2[1] - *param_2 >> 5);
      uVar10 = uVar11;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (bVar7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


