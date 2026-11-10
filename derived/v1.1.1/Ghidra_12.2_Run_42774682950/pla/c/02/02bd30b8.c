/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd30b8; name: FUN_02bd30b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd30b8(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,long param_6)

{
  int *piVar1;
  LightEventType *pLVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  float fVar15;
  float extraout_s0;
  float extraout_s0_03;
  undefined1 auVar16 [12];
  float extraout_var;
  float extraout_var_04;
  float extraout_var_09;
  float fVar38;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float extraout_s0_00;
  undefined1 auVar20 [16];
  float extraout_var_00;
  float extraout_var_05;
  float extraout_var_10;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float extraout_s0_01;
  undefined1 auVar26 [16];
  float extraout_var_01;
  float extraout_var_06;
  float extraout_var_11;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float extraout_s0_02;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float extraout_var_02;
  float extraout_var_07;
  float extraout_var_12;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float extraout_var_03;
  float extraout_var_08;
  float extraout_var_13;
  undefined1 auVar37 [16];
  float fVar68;
  undefined1 auVar39 [12];
  float fVar67;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar40 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar41 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  undefined1 auVar71 [12];
  undefined8 uVar70;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar72 [12];
  undefined1 auVar79 [16];
  undefined1 auVar73 [12];
  float fVar101;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar74 [12];
  undefined1 auVar83 [16];
  undefined1 auVar75 [12];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar99;
  float fVar100;
  float fVar102;
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  byte bVar103;
  float fVar104;
  int iVar105;
  byte bVar139;
  byte bVar140;
  byte bVar142;
  float fVar143;
  byte bVar145;
  byte bVar146;
  byte bVar148;
  int iVar149;
  byte bVar150;
  byte bVar151;
  byte bVar153;
  byte bVar155;
  byte bVar156;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  int iVar144;
  int iVar154;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  byte bVar141;
  byte bVar147;
  byte bVar152;
  byte bVar157;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  int iVar158;
  undefined8 uVar159;
  int iVar186;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar184;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  int iVar185;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar178 [16];
  undefined1 auVar177 [16];
  undefined1 auVar176 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  float fVar205;
  float fVar206;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  float fVar207;
  undefined1 auVar204 [16];
  undefined8 uVar208;
  undefined8 uVar210;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined8 uVar209;
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  float fVar225;
  float fVar226;
  undefined1 auVar224 [16];
  undefined8 uVar227;
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined8 uVar239;
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  float fVar250;
  float fVar251;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  float fVar252;
  undefined8 uVar253;
  float fVar273;
  undefined1 in_q17 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar265 [16];
  undefined1 auVar264 [16];
  undefined1 auVar263 [16];
  undefined1 auVar262 [16];
  undefined1 auVar269 [16];
  undefined1 auVar268 [16];
  undefined1 auVar267 [16];
  undefined1 auVar266 [16];
  float fVar272;
  float fVar274;
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar275 [16];
  undefined8 uVar276;
  undefined8 uVar277;
  undefined8 uVar278;
  undefined8 uVar279;
  float fVar280;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0 [2];
  undefined8 local_90;
  ulong uStack_88;
  undefined8 *local_80;
  double dStack_78;
  double local_70;
  undefined8 local_68;
  long *local_38;
  
  if (*(char *)(param_5 + 0x81) == '\0') {
LAB_02bd3558:
    if (*(char *)(param_5 + 0x80) == '\0') goto LAB_02bd3560;
LAB_02bd319c:
    if (*(char *)(param_5 + 200) == '\0') goto LAB_02bd3560;
LAB_02bd3f54:
    if (*(char *)(param_5 + 0x80) == '\0') goto LAB_02bd45e0;
LAB_02bd3f5c:
    lVar12 = nn::os::GetCurrentThread();
    plVar10 = (long *)(param_6 + 0x10);
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_6 + 4));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02bd3fa4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02bd3fa4:
    fVar104 = *(float *)(param_5 + 0xa0);
    fVar143 = *(float *)(param_5 + 0xa4);
    fVar38 = *(float *)(param_5 + 0xa8);
    fVar68 = *(float *)(param_5 + 0xac);
    auVar87._0_4_ = fVar104 * fVar104;
    auVar87._4_4_ = fVar143 * fVar143;
    auVar87._8_4_ = fVar38 * fVar38;
    auVar87._12_4_ = fVar68 * fVar68;
    auVar160 = NEON_ext(auVar87,auVar87,8,1);
    fVar15 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    fVar67 = auVar160._0_4_ + auVar87._0_4_;
    fVar205 = auVar160._4_4_ + auVar87._4_4_;
    fVar184 = fVar67 + fVar205;
    fVar67 = fVar67 + fVar205;
    auVar88._8_8_ = CONCAT44(fVar67,fVar184);
    auVar88._0_8_ = CONCAT44(fVar67,fVar184);
    auVar160 = NEON_frsqrte(auVar88,4);
    iVar105 = -(uint)(fVar184 < fVar15);
    iVar144 = -(uint)(fVar67 < fVar15);
    iVar149 = -(uint)(fVar184 < fVar15);
    iVar154 = -(uint)(fVar67 < fVar15);
    auVar173._0_4_ = auVar160._0_4_ * fVar184;
    auVar173._4_4_ = auVar160._4_4_ * fVar67;
    auVar173._8_4_ = auVar160._8_4_ * fVar184;
    auVar173._12_4_ = auVar160._12_4_ * fVar67;
    auVar188 = NEON_frsqrts(auVar160,auVar173,4);
    auVar132._0_4_ = auVar160._0_4_ * auVar188._0_4_;
    auVar132._4_4_ = auVar160._4_4_ * auVar188._4_4_;
    auVar132._8_4_ = auVar160._8_4_ * auVar188._8_4_;
    auVar132._12_4_ = auVar160._12_4_ * auVar188._12_4_;
    auVar174._0_4_ = fVar184 * auVar132._0_4_;
    auVar174._4_4_ = fVar67 * auVar132._4_4_;
    auVar174._8_4_ = fVar184 * auVar132._8_4_;
    auVar174._12_4_ = fVar67 * auVar132._12_4_;
    auVar175 = NEON_frsqrts(auVar132,auVar174,4);
    auVar133._0_4_ = auVar132._0_4_ * auVar175._0_4_;
    auVar133._4_4_ = auVar132._4_4_ * auVar175._4_4_;
    auVar133._8_4_ = auVar132._8_4_ * auVar175._8_4_;
    auVar133._12_4_ = auVar132._12_4_ * auVar175._12_4_;
    fVar104 = fVar104 * auVar133._0_4_;
    fVar143 = fVar143 * auVar133._4_4_;
    fVar38 = fVar38 * auVar133._8_4_;
    fVar68 = fVar68 * auVar133._12_4_;
    bVar103 = (byte)((uint)iVar105 >> 8);
    bVar139 = (byte)((uint)iVar105 >> 0x10);
    bVar140 = (byte)((uint)iVar105 >> 0x18);
    auVar61[0] = SUB41(fVar104,0) & ~(byte)iVar105;
    auVar61[1] = (byte)((uint)fVar104 >> 8) & ~bVar103;
    auVar61[2] = (byte)((uint)fVar104 >> 0x10) & ~bVar139;
    auVar61[3] = (byte)((uint)fVar104 >> 0x18) & ~bVar140;
    auVar61[4] = SUB41(fVar143,0) & ~(byte)iVar144;
    auVar61[5] = (byte)((uint)fVar143 >> 8) & ~(byte)((uint)iVar144 >> 8);
    auVar61[6] = (byte)((uint)fVar143 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10);
    auVar61[7] = (byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18);
    auVar61[8] = SUB41(fVar38,0) & ~(byte)iVar149;
    auVar61[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar149 >> 8);
    auVar61[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
    auVar61[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
    auVar61[0xc] = SUB41(fVar68,0) & ~(byte)iVar154;
    auVar61[0xd] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar154 >> 8);
    auVar61[0xe] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
    auVar61[0xf] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
    iVar105 = -(uint)((float)CONCAT13((byte)((uint)fVar184 >> 0x18) & ~bVar140,
                                      CONCAT12((byte)((uint)fVar184 >> 0x10) & ~bVar139,
                                               CONCAT11((byte)((uint)fVar184 >> 8) & ~bVar103,
                                                        SUB41(fVar184,0) & ~(byte)iVar105))) == 0.0)
    ;
    auVar32._8_8_ = _UNK_0388a138;
    auVar32._0_8_ = _DAT_0388a130;
    auVar31._0_4_ =
         CONCAT13(~(byte)((uint)iVar105 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar105 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar105 >> 8),~(byte)iVar105)));
    auVar31._4_4_ = auVar31._0_4_;
    auVar31._8_4_ = auVar31._0_4_;
    auVar31._12_4_ = auVar31._0_4_;
    auVar32 = auVar32 ^ (auVar32 ^ auVar61) & auVar31;
    dStack_78 = auVar32._8_8_;
    local_80 = auVar32._0_8_;
    (**(code **)(**(long **)(param_5 + 0xd0) + 0x178))
              (*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),&local_80,0,0);
    auVar160 = *(undefined1 (*) [16])(param_5 + 0x90);
    auVar188 = NEON_ext(auVar160,auVar160,8,1);
    param_3 = ZEXT816(0);
    param_2 = *(undefined1 (*) [16])(param_5 + 0x290);
    auVar33._0_8_ =
         (undefined8 *)CONCAT44(param_2._4_4_ + auVar160._4_4_,param_2._0_4_ + auVar160._0_4_);
    auVar33._8_4_ = param_2._8_4_ + auVar188._0_4_;
    auVar33._12_4_ = param_2._12_4_ + 0.0;
    dStack_78 = auVar33._8_8_;
    local_80 = auVar33._0_8_;
    FUN_02bd4a14(*(long *)(param_5 + 0xd0) + 0x18,*(undefined8 *)(param_5 + 0xd8),&local_80,0);
    pLVar2 = (LightEventType *)(param_6 + 4);
    *(undefined8 *)(param_6 + 0x10) = 0;
    nn::os::SignalLightEvent(pLVar2);
    local_80 = (undefined8 *)0x0;
    dStack_78 = 0.0;
    FUN_008c4b3c(&local_80,param_5 + 0x68);
    FUN_00956dac(local_a0,&local_80);
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar105 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar105 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar105 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar105 = __cxa_guard_acquire(PTR_DAT_04379498), iVar105 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_90 = *puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_90);
      }
    }
    plVar7 = local_a0[0];
    if (local_a0[0] != (long *)0x0) {
      fStack_b8 = (float)*(undefined8 *)(param_5 + 0x98);
      fStack_b4 = (float)((ulong)*(undefined8 *)(param_5 + 0x98) >> 0x20);
      local_c0 = (float)*(undefined8 *)(param_5 + 0x90);
      fStack_bc = (float)((ulong)*(undefined8 *)(param_5 + 0x90) >> 0x20);
      auVar138 = *(undefined1 (*) [16])(param_5 + 0xa0);
      local_80 = (undefined8 *)0x0;
      dStack_78 = 0.0;
      FUN_0095aa3c(&local_80,local_a0[0] + 0x4e);
      local_70 = (double)plVar7[0x50];
      FUN_02bd4a68(&local_b0,&local_80);
      puVar8 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar105 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar105 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar105 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar105 = __cxa_guard_acquire(PTR_DAT_04379498), iVar105 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_90 = *puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_90);
        }
      }
      if (local_b0 == (long *)0x0) {
        cVar3 = *(char *)(param_5 + 200);
      }
      else {
        (**(code **)(*local_b0 + 0x40))();
        auVar262._4_12_ = in_q17._4_12_;
        auVar262._0_4_ = extraout_s0_02;
        auVar264._12_4_ = in_q17._12_4_;
        auVar264._0_8_ = auVar262._0_8_;
        auVar264._8_4_ = extraout_var_02;
        fVar38 = param_3._0_4_;
        auVar263._8_8_ = auVar264._8_8_;
        auVar263._4_4_ = fVar38;
        auVar263._0_4_ = extraout_s0_02;
        fVar68 = param_3._4_4_;
        auVar265._0_12_ = auVar263._0_12_;
        auVar265._12_4_ = fVar68;
        fVar184 = param_3._8_4_;
        fVar67 = auVar133._0_4_;
        fVar205 = auVar133._4_4_;
        fVar101 = auVar133._8_4_;
        fVar15 = param_2._0_4_;
        fVar104 = param_2._4_4_;
        fVar143 = param_2._8_4_;
        if (*(char *)(param_5 + 0x281) == '\0') {
          auVar90._4_12_ = param_3._4_12_;
          auVar90._0_4_ = extraout_s0_02;
          auVar92._0_8_ = auVar90._0_8_;
          auVar92._8_4_ = fVar38;
          auVar92._12_4_ = param_3._12_4_;
          auVar91._8_8_ = auVar92._8_8_;
          auVar91._4_4_ = fVar15;
          auVar91._0_4_ = extraout_s0_02;
          auVar93._0_12_ = auVar91._0_12_;
          auVar93._12_4_ = 0;
          auVar36._4_4_ = fVar104;
          auVar36._0_4_ = extraout_var_02;
          auVar36._8_4_ = fVar68;
          auVar36._12_4_ = 0;
          auVar176._4_12_ = auVar175._4_12_;
          auVar176._0_4_ = extraout_var_07;
          auVar178._12_4_ = auVar175._12_4_;
          auVar178._0_8_ = auVar176._0_8_;
          auVar178._8_4_ = fVar184;
          auVar177._8_8_ = auVar178._8_8_;
          auVar177._4_4_ = fVar143;
          auVar177._0_4_ = extraout_var_07;
          auVar179._0_12_ = auVar177._0_12_;
          auVar179._12_4_ = 0;
          auVar63._0_4_ =
               0.0 - (extraout_s0_02 * fVar67 + extraout_var_02 * fVar205 +
                     extraout_var_07 * fVar101);
          auVar63._4_4_ = 0.0 - (fVar15 * fVar67 + fVar104 * fVar205 + fVar143 * fVar101);
          auVar63._8_4_ = 0.0 - (fVar38 * fVar67 + fVar68 * fVar205 + fVar184 * fVar101);
          auVar63._12_4_ = 0.0 - (fVar67 * 0.0 + fVar205 * 0.0 + fVar101 * 0.0);
        }
        else {
          uVar210 = a64_TBL(ZEXT816(0),param_2,DAT_0388a880);
          uVar227 = a64_TBL(ZEXT816(0),param_2,DAT_0388a6f0);
          uVar276 = a64_TBL(ZEXT816(0),param_3,DAT_0388a6d8);
          uVar208 = a64_TBL(ZEXT816(0),param_3,DAT_0388a680);
          uVar277 = a64_TBL(ZEXT816(0),param_2,DAT_0388a6d8);
          uVar159 = a64_TBL(ZEXT816(0),param_2,DAT_0388a680);
          uVar209 = a64_TBL(ZEXT816(0),param_3,DAT_0388a880);
          uVar70 = a64_TBL(ZEXT816(0),param_3,DAT_0388a6f0);
          auVar34._0_4_ =
               extraout_s0_02 * (float)uVar210 * (float)uVar208 -
               extraout_s0_02 * (float)uVar159 * (float)uVar209;
          auVar34._4_4_ =
               extraout_var_02 * (float)((ulong)uVar210 >> 0x20) * (float)((ulong)uVar208 >> 0x20) -
               extraout_var_02 * (float)((ulong)uVar159 >> 0x20) * (float)((ulong)uVar209 >> 0x20);
          auVar34._8_4_ =
               extraout_var_07 * (float)uVar227 * (float)uVar276 -
               extraout_var_07 * (float)uVar277 * (float)uVar70;
          auVar34._12_4_ =
               extraout_var_12 * (float)((ulong)uVar227 >> 0x20) * (float)((ulong)uVar276 >> 0x20) -
               extraout_var_12 * (float)((ulong)uVar277 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
          auVar160 = NEON_ext(auVar34,auVar34,8,1);
          auVar35._0_4_ = auVar34._0_4_ + auVar34._4_4_ + auVar160._0_4_ + auVar160._4_4_;
          auVar35._4_4_ = auVar35._0_4_;
          auVar35._8_4_ = auVar35._0_4_;
          auVar35._12_4_ = auVar35._0_4_;
          auVar160 = NEON_frecpe(auVar35,4);
          auVar188 = NEON_frecps(auVar160,auVar35,4);
          auVar89._0_4_ = auVar160._0_4_ * auVar188._0_4_;
          auVar89._4_4_ = auVar160._4_4_ * auVar188._4_4_;
          auVar89._8_4_ = auVar160._8_4_ * auVar188._8_4_;
          auVar89._12_4_ = auVar160._12_4_ * auVar188._12_4_;
          auVar160 = NEON_frecps(auVar89,auVar35,4);
          iVar105 = -(uint)(auVar35._0_4_ == 0.0);
          iVar144 = -(uint)(auVar35._0_4_ == 0.0);
          iVar149 = -(uint)(auVar35._0_4_ == 0.0);
          iVar154 = -(uint)(auVar35._0_4_ == 0.0);
          fVar69 = auVar89._0_4_ * auVar160._0_4_;
          fVar99 = auVar89._4_4_ * auVar160._4_4_;
          fVar100 = auVar89._8_4_ * auVar160._8_4_;
          fVar102 = auVar89._12_4_ * auVar160._12_4_;
          auVar275._4_4_ = fVar15;
          auVar275._0_4_ = extraout_s0_02;
          auVar275._8_4_ = fVar38;
          auVar275._12_4_ = 0;
          auVar266._4_12_ = auVar265._4_12_;
          auVar266._0_4_ = extraout_var_02;
          auVar268._0_8_ = auVar266._0_8_;
          auVar268._8_4_ = fVar68;
          auVar268._12_4_ = fVar68;
          auVar267._8_8_ = auVar268._8_8_;
          auVar267._4_4_ = fVar104;
          auVar267._0_4_ = extraout_var_02;
          auVar269._0_12_ = auVar267._0_12_;
          auVar269._12_4_ = 0;
          auVar62._4_4_ = fVar143;
          auVar62._0_4_ = extraout_var_07;
          auVar62._8_4_ = fVar184;
          auVar62._12_4_ = 0;
          uVar239 = a64_TBL(ZEXT816(0),auVar269,DAT_0388a880);
          uVar208 = a64_TBL(ZEXT816(0),auVar269,DAT_0388a6f0);
          uVar278 = a64_TBL(ZEXT816(0),auVar62,DAT_0388a6d8);
          uVar159 = a64_TBL(ZEXT816(0),auVar62,DAT_0388a680);
          fVar184 = (float)((ulong)uVar159 >> 0x20);
          uVar279 = a64_TBL(ZEXT816(0),auVar62,DAT_0388a880);
          uVar209 = a64_TBL(ZEXT816(0),auVar62,DAT_0388a6f0);
          uVar210 = a64_TBL(ZEXT816(0),auVar275,DAT_0388a880);
          fVar207 = (float)((ulong)uVar278 >> 0x20);
          uVar227 = a64_TBL(ZEXT816(0),auVar275,DAT_0388a6f0);
          uVar70 = a64_TBL(ZEXT816(0),auVar269,DAT_0388a680);
          uVar253 = a64_TBL(ZEXT816(0),auVar269,DAT_0388a6d8);
          uVar276 = a64_TBL(ZEXT816(0),auVar275,DAT_0388a680);
          uVar277 = a64_TBL(ZEXT816(0),auVar275,DAT_0388a6d8);
          fVar250 = (float)((ulong)uVar239 >> 0x20);
          fVar251 = (float)((ulong)uVar208 >> 0x20);
          fVar15 = (float)((ulong)uVar70 >> 0x20);
          fVar206 = (float)((ulong)uVar279 >> 0x20);
          fVar104 = (float)((ulong)uVar253 >> 0x20);
          fVar280 = (float)((ulong)uVar209 >> 0x20);
          fVar225 = (float)((ulong)uVar276 >> 0x20);
          fVar226 = (float)((ulong)uVar277 >> 0x20);
          fVar143 = (float)((ulong)uVar210 >> 0x20);
          fVar38 = (float)((ulong)uVar227 >> 0x20);
          fVar252 = fVar69 * ((float)uVar239 * (float)uVar159 - (float)uVar279 * (float)uVar70);
          fVar272 = fVar99 * (fVar250 * fVar184 - fVar206 * fVar15);
          fVar273 = fVar100 * ((float)uVar208 * (float)uVar278 - (float)uVar209 * (float)uVar253);
          fVar274 = fVar102 * (fVar251 * fVar207 - fVar280 * fVar104);
          fVar68 = fVar69 * ((float)uVar279 * (float)uVar276 - (float)uVar210 * (float)uVar159);
          fVar184 = fVar99 * (fVar206 * fVar225 - fVar143 * fVar184);
          fVar206 = fVar100 * ((float)uVar209 * (float)uVar277 - (float)uVar227 * (float)uVar278);
          fVar207 = fVar102 * (fVar280 * fVar226 - fVar38 * fVar207);
          fVar69 = fVar69 * ((float)uVar70 * (float)uVar210 - (float)uVar239 * (float)uVar276);
          fVar99 = fVar99 * (fVar15 * fVar143 - fVar250 * fVar225);
          fVar100 = fVar100 * ((float)uVar253 * (float)uVar227 - (float)uVar208 * (float)uVar277);
          fVar102 = fVar102 * (fVar104 * fVar38 - fVar251 * fVar226);
          fVar15 = (-(fVar252 * fVar67) - fVar68 * fVar205) - fVar69 * fVar101;
          fVar104 = (-(fVar272 * fVar67) - fVar184 * fVar205) - fVar99 * fVar101;
          fVar143 = (-(fVar273 * fVar67) - fVar206 * fVar205) - fVar100 * fVar101;
          fVar38 = (-(fVar274 * fVar67) - fVar207 * fVar205) - fVar102 * fVar101;
          bVar103 = ~(byte)iVar105;
          bVar139 = ~(byte)((uint)iVar105 >> 8);
          bVar140 = ~(byte)((uint)iVar105 >> 0x10);
          bVar141 = ~(byte)((uint)iVar105 >> 0x18);
          bVar142 = ~(byte)iVar144;
          bVar145 = ~(byte)((uint)iVar144 >> 8);
          bVar146 = ~(byte)((uint)iVar144 >> 0x10);
          bVar147 = ~(byte)((uint)iVar144 >> 0x18);
          bVar148 = ~(byte)iVar149;
          bVar150 = ~(byte)((uint)iVar149 >> 8);
          bVar151 = ~(byte)((uint)iVar149 >> 0x10);
          bVar152 = ~(byte)((uint)iVar149 >> 0x18);
          bVar153 = ~(byte)iVar154;
          bVar155 = ~(byte)((uint)iVar154 >> 8);
          bVar156 = ~(byte)((uint)iVar154 >> 0x10);
          bVar157 = ~(byte)((uint)iVar154 >> 0x18);
          auVar93[0] = SUB41(fVar252,0) & bVar103;
          auVar93[1] = (byte)((uint)fVar252 >> 8) & bVar139;
          auVar93[2] = (byte)((uint)fVar252 >> 0x10) & bVar140;
          auVar93[3] = (byte)((uint)fVar252 >> 0x18) & bVar141;
          auVar93[4] = SUB41(fVar272,0) & bVar142;
          auVar93[5] = (byte)((uint)fVar272 >> 8) & bVar145;
          auVar93[6] = (byte)((uint)fVar272 >> 0x10) & bVar146;
          auVar93[7] = (byte)((uint)fVar272 >> 0x18) & bVar147;
          auVar93[8] = SUB41(fVar273,0) & bVar148;
          auVar93[9] = (byte)((uint)fVar273 >> 8) & bVar150;
          auVar93[10] = (byte)((uint)fVar273 >> 0x10) & bVar151;
          auVar93[0xb] = (byte)((uint)fVar273 >> 0x18) & bVar152;
          auVar93[0xc] = SUB41(fVar274,0) & bVar153;
          auVar93[0xd] = (byte)((uint)fVar274 >> 8) & bVar155;
          auVar93[0xe] = (byte)((uint)fVar274 >> 0x10) & bVar156;
          auVar93[0xf] = (byte)((uint)fVar274 >> 0x18) & bVar157;
          auVar36[0] = SUB41(fVar68,0) & bVar103;
          auVar36[1] = (byte)((uint)fVar68 >> 8) & bVar139;
          auVar36[2] = (byte)((uint)fVar68 >> 0x10) & bVar140;
          auVar36[3] = (byte)((uint)fVar68 >> 0x18) & bVar141;
          auVar36[4] = SUB41(fVar184,0) & bVar142;
          auVar36[5] = (byte)((uint)fVar184 >> 8) & bVar145;
          auVar36[6] = (byte)((uint)fVar184 >> 0x10) & bVar146;
          auVar36[7] = (byte)((uint)fVar184 >> 0x18) & bVar147;
          auVar36[8] = SUB41(fVar206,0) & bVar148;
          auVar36[9] = (byte)((uint)fVar206 >> 8) & bVar150;
          auVar36[10] = (byte)((uint)fVar206 >> 0x10) & bVar151;
          auVar36[0xb] = (byte)((uint)fVar206 >> 0x18) & bVar152;
          auVar36[0xc] = SUB41(fVar207,0) & bVar153;
          auVar36[0xd] = (byte)((uint)fVar207 >> 8) & bVar155;
          auVar36[0xe] = (byte)((uint)fVar207 >> 0x10) & bVar156;
          auVar36[0xf] = (byte)((uint)fVar207 >> 0x18) & bVar157;
          auVar179[0] = SUB41(fVar69,0) & bVar103;
          auVar179[1] = (byte)((uint)fVar69 >> 8) & bVar139;
          auVar179[2] = (byte)((uint)fVar69 >> 0x10) & bVar140;
          auVar179[3] = (byte)((uint)fVar69 >> 0x18) & bVar141;
          auVar179[4] = SUB41(fVar99,0) & bVar142;
          auVar179[5] = (byte)((uint)fVar99 >> 8) & bVar145;
          auVar179[6] = (byte)((uint)fVar99 >> 0x10) & bVar146;
          auVar179[7] = (byte)((uint)fVar99 >> 0x18) & bVar147;
          auVar179[8] = SUB41(fVar100,0) & bVar148;
          auVar179[9] = (byte)((uint)fVar100 >> 8) & bVar150;
          auVar179[10] = (byte)((uint)fVar100 >> 0x10) & bVar151;
          auVar179[0xb] = (byte)((uint)fVar100 >> 0x18) & bVar152;
          auVar179[0xc] = SUB41(fVar102,0) & bVar153;
          auVar179[0xd] = (byte)((uint)fVar102 >> 8) & bVar155;
          auVar179[0xe] = (byte)((uint)fVar102 >> 0x10) & bVar156;
          auVar179[0xf] = (byte)((uint)fVar102 >> 0x18) & bVar157;
          auVar63[0] = SUB41(fVar15,0) & bVar103;
          auVar63[1] = (byte)((uint)fVar15 >> 8) & bVar139;
          auVar63[2] = (byte)((uint)fVar15 >> 0x10) & bVar140;
          auVar63[3] = (byte)((uint)fVar15 >> 0x18) & bVar141;
          auVar63[4] = SUB41(fVar104,0) & bVar142;
          auVar63[5] = (byte)((uint)fVar104 >> 8) & bVar145;
          auVar63[6] = (byte)((uint)fVar104 >> 0x10) & bVar146;
          auVar63[7] = (byte)((uint)fVar104 >> 0x18) & bVar147;
          auVar63[8] = SUB41(fVar143,0) & bVar148;
          auVar63[9] = (byte)((uint)fVar143 >> 8) & bVar150;
          auVar63[10] = (byte)((uint)fVar143 >> 0x10) & bVar151;
          auVar63[0xb] = (byte)((uint)fVar143 >> 0x18) & bVar152;
          auVar63[0xc] = SUB41(fVar38,0) & bVar153;
          auVar63[0xd] = (byte)((uint)fVar38 >> 8) & bVar155;
          auVar63[0xe] = (byte)((uint)fVar38 >> 0x10) & bVar156;
          auVar63[0xf] = (byte)((uint)fVar38 >> 0x18) & bVar157;
        }
        fVar67 = auVar93._0_4_;
        fVar205 = auVar93._4_4_ * local_c0;
        fVar101 = auVar93._8_4_ * local_c0;
        fVar69 = auVar93._12_4_ * local_c0;
        fVar38 = auVar36._0_4_;
        fVar68 = auVar36._4_4_;
        fVar184 = auVar36._8_4_;
        fVar15 = fVar184 * fStack_bc;
        fVar104 = auVar36._12_4_ * fStack_bc;
        fVar99 = auVar179._4_4_;
        fVar100 = auVar179._8_4_;
        fVar143 = auVar179._12_4_ * fStack_b8;
        local_c0 = fVar67 * local_c0 + fVar38 * fStack_bc + auVar179._0_4_ * fStack_b8 +
                   auVar63._0_4_;
        fStack_bc = fVar205 + fVar68 * fStack_bc + fVar99 * fStack_b8 + auVar63._4_4_;
        fStack_b8 = fVar101 + fVar15 + fVar100 * fStack_b8 + auVar63._8_4_;
        fStack_b4 = fVar69 + fVar104 + fVar143 + auVar63._12_4_;
        auVar160 = NEON_fmov(0x3f800000,4);
        fVar15 = (float)_DAT_03889820 * fVar67 + (float)_DAT_0388a450 * fVar68 +
                 (float)_DAT_03889eb0 * fVar100 + auVar160._0_4_;
        fVar104 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar67 +
                  (float)((ulong)_DAT_0388a450 >> 0x20) * fVar68 +
                  (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar100 + auVar160._4_4_;
        fVar143 = (float)_UNK_03889828 * fVar67 + (float)_UNK_0388a458 * fVar68 +
                  (float)_UNK_03889eb8 * fVar100 + auVar160._8_4_;
        fVar68 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar67 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar68 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar100 + auVar160._12_4_;
        uVar208 = NEON_ext(auVar93._0_8_,auVar179._0_8_,4,1);
        auVar160 = NEON_ext(auVar93,auVar93,8,1);
        auVar94._0_4_ = (float)uVar208 + fVar38;
        fVar67 = (float)((ulong)uVar208 >> 0x20);
        auVar94._4_4_ = fVar67 + auVar160._0_4_;
        auVar94._8_4_ = fVar184 + fVar99;
        auVar94._12_4_ = 0;
        auVar134._0_4_ = (float)uVar208 - fVar38;
        auVar134._4_4_ = fVar67 - auVar160._0_4_;
        auVar134._8_4_ = fVar184 - fVar99;
        auVar134._12_4_ = 0;
        uVar159 = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a888);
        uVar208 = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a710);
        auVar204._8_8_ = uVar208;
        auVar204._0_8_ = uVar159;
        uVar208 = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a758);
        auVar248._4_12_ = auVar204._4_12_;
        auVar248._0_4_ = fVar15;
        auVar224._0_8_ = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a880);
        uVar209 = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a640);
        auVar180._0_4_ = (undefined4)uVar159;
        auVar180._4_4_ = fVar104;
        auVar180._8_8_ = uVar208;
        auVar237._0_8_ = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a700);
        uVar208 = a64_TBL(ZEXT816(0),auVar94,auVar134,DAT_0388a590);
        auVar135._4_4_ = fVar104;
        auVar135._0_4_ = fVar104;
        auVar135._8_4_ = fVar104;
        auVar135._12_4_ = fVar104;
        auVar224._12_4_ = (undefined4)((ulong)uVar209 >> 0x20);
        auVar224._8_4_ = fVar143;
        auVar237._8_8_ = uVar208;
        auVar271._4_4_ = fVar15;
        auVar271._0_4_ = fVar15;
        auVar271._8_4_ = fVar15;
        auVar271._12_4_ = fVar15;
        auVar247._0_8_ = CONCAT44(-(uint)(fVar15 <= fVar104),-(uint)(fVar15 <= fVar104));
        auVar247._8_4_ = -(uint)(fVar15 <= fVar104);
        auVar247._12_4_ = -(uint)(fVar15 <= fVar104);
        auVar270._8_8_ = auVar247._8_8_;
        auVar270._0_8_ = auVar247._0_8_;
        auVar248 = auVar248 ^ (auVar248 ^ auVar180) & auVar247;
        auVar238._0_12_ = auVar237._0_12_;
        auVar238._12_4_ = fVar68;
        auVar271 = auVar271 ^ (auVar271 ^ auVar135) & auVar270;
        auVar95._4_4_ = fVar143;
        auVar95._0_4_ = fVar143;
        auVar95._8_4_ = fVar143;
        auVar95._12_4_ = fVar143;
        auVar136._0_8_ =
             CONCAT44(-(uint)(auVar271._4_4_ <= fVar143),-(uint)(auVar271._0_4_ <= fVar143));
        auVar136._8_4_ = -(uint)(auVar271._8_4_ <= fVar143);
        auVar136._12_4_ = -(uint)(auVar271._12_4_ <= fVar143);
        auVar181._8_8_ = auVar136._8_8_;
        auVar181._0_8_ = auVar136._0_8_;
        auVar248 = auVar248 ^ (auVar248 ^ auVar224) & auVar136;
        auVar271 = auVar271 ^ (auVar271 ^ auVar95) & auVar181;
        auVar64._0_4_ = -(uint)(auVar271._0_4_ <= fVar68);
        auVar64._4_4_ = -(uint)(auVar271._4_4_ <= fVar68);
        auVar64._8_4_ = -(uint)(auVar271._8_4_ <= fVar68);
        auVar64._12_4_ = -(uint)(auVar271._12_4_ <= fVar68);
        auVar248 = auVar248 ^ (auVar248 ^ auVar238) & auVar64;
        fVar143 = auVar248._0_4_;
        auVar96._0_4_ = fVar143 * fVar143;
        fVar38 = auVar248._4_4_;
        auVar96._4_4_ = fVar38 * fVar38;
        fVar68 = auVar248._8_4_;
        auVar96._8_4_ = fVar68 * fVar68;
        fVar184 = auVar248._12_4_;
        auVar96._12_4_ = fVar184 * fVar184;
        auVar160 = NEON_ext(auVar96,auVar96,8,1);
        fVar104 = auVar160._0_4_ + auVar96._0_4_;
        fVar67 = auVar160._4_4_ + auVar96._4_4_;
        fVar15 = fVar104 + fVar67;
        fVar104 = fVar104 + fVar67;
        auVar97._8_8_ = CONCAT44(fVar104,fVar15);
        auVar97._0_8_ = CONCAT44(fVar104,fVar15);
        auVar160 = NEON_frsqrte(auVar97,4);
        auVar182._0_4_ = auVar160._0_4_ * fVar15;
        auVar182._4_4_ = auVar160._4_4_ * fVar104;
        auVar182._8_4_ = auVar160._8_4_ * fVar15;
        auVar182._12_4_ = auVar160._12_4_ * fVar104;
        auVar188 = NEON_frsqrts(auVar160,auVar182,4);
        auVar137._0_4_ = auVar160._0_4_ * auVar188._0_4_;
        auVar137._4_4_ = auVar160._4_4_ * auVar188._4_4_;
        auVar137._8_4_ = auVar160._8_4_ * auVar188._8_4_;
        auVar137._12_4_ = auVar160._12_4_ * auVar188._12_4_;
        auVar183._0_4_ = fVar15 * auVar137._0_4_;
        auVar183._4_4_ = fVar104 * auVar137._4_4_;
        auVar183._8_4_ = fVar15 * auVar137._8_4_;
        auVar183._12_4_ = fVar104 * auVar137._12_4_;
        iVar105 = -(uint)(fVar15 == 0.0);
        iVar144 = -(uint)(fVar104 == 0.0);
        iVar149 = -(uint)(fVar15 == 0.0);
        iVar154 = -(uint)(fVar104 == 0.0);
        auVar160 = NEON_frsqrts(auVar137,auVar183,4);
        fVar143 = auVar137._0_4_ * auVar160._0_4_ * fVar143;
        fVar38 = auVar137._4_4_ * auVar160._4_4_ * fVar38;
        fVar68 = auVar137._8_4_ * auVar160._8_4_ * fVar68;
        fVar184 = auVar137._12_4_ * auVar160._12_4_ * fVar184;
        fVar15 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                                 CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                          ~(byte)((uint)iVar105 >> 0x10),
                                          CONCAT11((byte)((uint)fVar143 >> 8) &
                                                   ~(byte)((uint)iVar105 >> 8),
                                                   SUB41(fVar143,0) & ~(byte)iVar105)));
        auVar65._0_8_ =
             CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                      CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                               CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                        CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,fVar15))));
        auVar65[8] = SUB41(fVar68,0) & ~(byte)iVar149;
        auVar65[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
        auVar65[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
        auVar65[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
        auVar65[0xc] = SUB41(fVar184,0) & ~(byte)iVar154;
        auVar65[0xd] = (byte)((uint)fVar184 >> 8) & ~(byte)((uint)iVar154 >> 8);
        auVar65[0xe] = (byte)((uint)fVar184 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
        auVar65[0xf] = (byte)((uint)fVar184 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
        uVar210 = a64_TBL(ZEXT816(0),auVar138,DAT_0388a6c8);
        uVar70 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a680);
        uVar209 = a64_TBL(ZEXT816(0),auVar138,DAT_0388a680);
        uVar159 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a580);
        uVar208 = a64_TBL(ZEXT816(0),auVar138,DAT_0388a580);
        param_3._0_4_ = fVar15 * (float)uVar208;
        fVar104 = (float)((ulong)auVar65._0_8_ >> 0x20);
        param_3._4_4_ = fVar104 * (float)((ulong)uVar208 >> 0x20);
        fVar67 = (float)uVar70 * (float)uVar210;
        fVar184 = (float)((ulong)uVar70 >> 0x20);
        fVar205 = fVar184 * (float)((ulong)uVar210 >> 0x20);
        param_3._12_4_ = fVar205;
        param_3._8_4_ = fVar67;
        uVar210 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a880);
        fVar68 = (float)((ulong)uVar159 >> 0x20);
        fVar69 = auVar138._4_4_;
        fVar99 = auVar138._8_4_;
        fVar100 = auVar138._12_4_;
        uVar208 = a64_TBL(ZEXT816(0),auVar138,DAT_0388a880);
        uVar227 = a64_TBL(ZEXT816(0),auVar138,DAT_0388a790);
        auVar249._8_8_ = auVar138._0_8_;
        auVar249._0_8_ = auVar138._0_8_;
        fVar101 = (float)((ulong)uVar210 >> 0x20);
        uVar276 = a64_TBL(ZEXT816(0),auVar249,DAT_0388a648);
        param_2._8_8_ = _UNK_03889ad8;
        param_2._0_8_ = (double)_DAT_03889ad0;
        fVar143 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar38 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        auVar138._0_4_ =
             (auVar138._0_4_ * (float)uVar159 + (float)_DAT_03889ad0 * param_3._0_4_ +
             (float)_DAT_03889ad0 * (float)uVar210 * (float)uVar209) -
             (float)uVar70 * (float)uVar208;
        auVar138._4_4_ =
             (fVar69 * fVar68 + fVar143 * param_3._4_4_ +
             fVar143 * fVar101 * (float)((ulong)uVar209 >> 0x20)) -
             fVar184 * (float)((ulong)uVar208 >> 0x20);
        auVar138._8_4_ =
             (fVar99 * (float)uVar159 + (float)_UNK_03889ad8 * fVar67 +
             (float)_UNK_03889ad8 * fVar15 * (float)uVar276) - (float)uVar210 * (float)uVar227;
        auVar138._12_4_ =
             (fVar100 * fVar68 + fVar38 * fVar205 +
             fVar38 * fVar104 * (float)((ulong)uVar276 >> 0x20)) -
             fVar101 * (float)((ulong)uVar227 >> 0x20);
        cVar3 = *(char *)(param_5 + 200);
      }
      if (cVar3 != '\0') {
        lVar12 = nn::os::GetCurrentThread();
        do {
          if (*plVar10 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar2);
              while (*plVar10 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar4) {
                  *plVar10 = lVar12;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_02bd4560;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_02bd4560:
        local_80 = (undefined8 *)0x0;
        dStack_78 = 0.0;
        (**(code **)(**(long **)(param_5 + 0xd0) + 400))
                  (*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),&local_80,&local_80,0)
        ;
        *plVar10 = 0;
        nn::os::SignalLightEvent(pLVar2);
      }
      *(undefined1 *)(local_a0[0] + 0x1c) = 1;
      local_a0[0][0x19] = auVar138._8_8_;
      local_a0[0][0x18] = auVar138._0_8_;
      *(float *)(local_a0[0] + 0x1b) = fStack_b8;
      *(float *)((long)local_a0[0] + 0xdc) = fStack_b4;
      *(float *)(local_a0[0] + 0x1a) = local_c0;
      *(float *)((long)local_a0[0] + 0xd4) = fStack_bc;
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x18))(local_b0);
      }
      *(undefined1 *)(param_5 + 0x80) = 0;
      if (local_a0[0] != (long *)0x0) {
        lVar12 = local_a0[0][0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar105 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar105 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar105 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_a0[0] + 0x20))();
          cVar3 = *(char *)(param_5 + 0x281);
          goto joined_r0x02bd486c;
        }
      }
      goto LAB_02bd45e0;
    }
    *(undefined1 *)(param_5 + 0x80) = 0;
    cVar3 = *(char *)(param_5 + 0x281);
  }
  else {
    local_80 = (undefined8 *)0x0;
    dStack_78 = 0.0;
    FUN_008c4b3c(&local_80,param_5 + 0x68);
    FUN_00956dac(local_a0,&local_80);
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar105 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar105 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar105 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar105 = __cxa_guard_acquire(PTR_DAT_04379498), iVar105 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_90 = *puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_90);
      }
    }
    if (local_a0[0] != (long *)0x0) {
      lVar12 = nn::os::GetCurrentThread();
      plVar10 = (long *)(param_6 + 0x10);
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_6 + 4));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02bd31d0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02bd31d0:
      (**(code **)(*local_a0[0] + 0x40))();
      auVar106._0_4_ = extraout_s0 * extraout_s0;
      auVar106._4_4_ = extraout_var * extraout_var;
      auVar106._8_4_ = extraout_var_04 * extraout_var_04;
      auVar106._12_4_ = extraout_var_09 * extraout_var_09;
      auVar160 = NEON_ext(auVar106,auVar106,8,1);
      fVar104 = auVar160._0_4_ + auVar106._0_4_;
      fVar143 = auVar160._4_4_ + auVar106._4_4_;
      fVar15 = fVar104 + fVar143;
      fVar104 = fVar104 + fVar143;
      auVar107._8_8_ = CONCAT44(fVar104,fVar15);
      auVar107._0_8_ = CONCAT44(fVar104,fVar15);
      auVar160 = NEON_frsqrte(auVar107,4);
      auVar187._0_4_ = auVar160._0_4_ * fVar15;
      auVar187._4_4_ = auVar160._4_4_ * fVar104;
      auVar187._8_4_ = auVar160._8_4_ * fVar15;
      auVar187._12_4_ = auVar160._12_4_ * fVar104;
      auVar188 = NEON_frsqrts(auVar160,auVar187,4);
      auVar161._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar161._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar161._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar161._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      auVar189._0_4_ = fVar15 * auVar161._0_4_;
      auVar189._4_4_ = fVar104 * auVar161._4_4_;
      auVar189._8_4_ = fVar15 * auVar161._8_4_;
      auVar189._12_4_ = fVar104 * auVar161._12_4_;
      iVar105 = -(uint)(fVar15 == 0.0);
      iVar144 = -(uint)(fVar104 == 0.0);
      iVar149 = -(uint)(fVar15 == 0.0);
      iVar154 = -(uint)(fVar104 == 0.0);
      auVar160 = NEON_frsqrts(auVar161,auVar189,4);
      fVar15 = extraout_s0 * auVar161._0_4_ * auVar160._0_4_;
      fVar104 = extraout_var * auVar161._4_4_ * auVar160._4_4_;
      fVar143 = extraout_var_04 * auVar161._8_4_ * auVar160._8_4_;
      fVar38 = extraout_var_09 * auVar161._12_4_ * auVar160._12_4_;
      fVar67 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                               CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                        ~(byte)((uint)iVar105 >> 0x10),
                                        CONCAT11((byte)((uint)fVar15 >> 8) &
                                                 ~(byte)((uint)iVar105 >> 8),
                                                 SUB41(fVar15,0) & ~(byte)iVar105)));
      auVar108._0_8_ =
           CONCAT17((byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar104,0) & ~(byte)iVar144,fVar67))));
      auVar108[8] = SUB41(fVar143,0) & ~(byte)iVar149;
      auVar108[9] = (byte)((uint)fVar143 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar108[10] = (byte)((uint)fVar143 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar108[0xb] = (byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      auVar108[0xc] = SUB41(fVar38,0) & ~(byte)iVar154;
      auVar108[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar154 >> 8);
      auVar108[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
      auVar108[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
      fVar143 = param_2._0_4_;
      auVar162._0_4_ = fVar143 * fVar143;
      fVar38 = param_2._4_4_;
      auVar162._4_4_ = fVar38 * fVar38;
      fVar68 = param_2._8_4_;
      auVar162._8_4_ = fVar68 * fVar68;
      auVar162._12_4_ = param_2._12_4_ * param_2._12_4_;
      auVar160 = NEON_ext(auVar162,auVar162,8,1);
      fVar104 = auVar160._0_4_ + auVar162._0_4_;
      fVar184 = auVar160._4_4_ + auVar162._4_4_;
      fVar15 = fVar104 + fVar184;
      fVar104 = fVar104 + fVar184;
      auVar163._8_8_ = CONCAT44(fVar104,fVar15);
      auVar163._0_8_ = CONCAT44(fVar104,fVar15);
      auVar160 = NEON_frsqrte(auVar163,4);
      auVar211._0_4_ = auVar160._0_4_ * fVar15;
      auVar211._4_4_ = auVar160._4_4_ * fVar104;
      auVar211._8_4_ = auVar160._8_4_ * fVar15;
      auVar211._12_4_ = auVar160._12_4_ * fVar104;
      auVar188 = NEON_frsqrts(auVar160,auVar211,4);
      auVar190._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar190._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar190._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar190._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      auVar212._0_4_ = fVar15 * auVar190._0_4_;
      auVar212._4_4_ = fVar104 * auVar190._4_4_;
      auVar212._8_4_ = fVar15 * auVar190._8_4_;
      auVar212._12_4_ = fVar104 * auVar190._12_4_;
      iVar105 = -(uint)(fVar15 == 0.0);
      iVar144 = -(uint)(fVar104 == 0.0);
      iVar149 = -(uint)(fVar15 == 0.0);
      auVar160 = NEON_frsqrts(auVar190,auVar212,4);
      fVar143 = fVar143 * auVar190._0_4_ * auVar160._0_4_;
      fVar38 = fVar38 * auVar190._4_4_ * auVar160._4_4_;
      fVar68 = fVar68 * auVar190._8_4_ * auVar160._8_4_;
      fVar184 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                                CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                         ~(byte)((uint)iVar105 >> 0x10),
                                         CONCAT11((byte)((uint)fVar143 >> 8) &
                                                  ~(byte)((uint)iVar105 >> 8),
                                                  SUB41(fVar143,0) & ~(byte)iVar105)));
      auVar39._0_8_ =
           CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,fVar184))));
      auVar39[8] = SUB41(fVar68,0) & ~(byte)iVar149;
      auVar39[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar39[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar39[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      fVar143 = param_3._0_4_;
      auVar191._0_4_ = fVar143 * fVar143;
      fVar38 = param_3._4_4_;
      auVar191._4_4_ = fVar38 * fVar38;
      fVar68 = param_3._8_4_;
      auVar191._8_4_ = fVar68 * fVar68;
      auVar191._12_4_ = param_3._12_4_ * param_3._12_4_;
      auVar160 = NEON_ext(auVar191,auVar191,8,1);
      fVar104 = auVar160._0_4_ + auVar191._0_4_;
      fVar205 = auVar160._4_4_ + auVar191._4_4_;
      fVar15 = fVar104 + fVar205;
      fVar104 = fVar104 + fVar205;
      auVar192._8_8_ = CONCAT44(fVar104,fVar15);
      auVar192._0_8_ = CONCAT44(fVar104,fVar15);
      auVar160 = NEON_frsqrte(auVar192,4);
      auVar228._0_4_ = auVar160._0_4_ * fVar15;
      auVar228._4_4_ = auVar160._4_4_ * fVar104;
      auVar228._8_4_ = auVar160._8_4_ * fVar15;
      auVar228._12_4_ = auVar160._12_4_ * fVar104;
      auVar188 = NEON_frsqrts(auVar160,auVar228,4);
      auVar213._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar213._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar213._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar213._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      auVar229._0_4_ = fVar15 * auVar213._0_4_;
      auVar229._4_4_ = fVar104 * auVar213._4_4_;
      auVar229._8_4_ = fVar15 * auVar213._8_4_;
      auVar229._12_4_ = fVar104 * auVar213._12_4_;
      auVar160 = NEON_frsqrts(auVar213,auVar229,4);
      fVar143 = fVar143 * auVar213._0_4_ * auVar160._0_4_;
      fVar38 = fVar38 * auVar213._4_4_ * auVar160._4_4_;
      fVar68 = fVar68 * auVar213._8_4_ * auVar160._8_4_;
      iVar105 = -(uint)(fVar15 == 0.0);
      iVar144 = -(uint)(fVar104 == 0.0);
      iVar149 = -(uint)(fVar15 == 0.0);
      auVar71._0_8_ =
           CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,
                                               CONCAT13((byte)((uint)fVar143 >> 0x18) &
                                                        ~(byte)((uint)iVar105 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                                                 ~(byte)((uint)iVar105 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar143 >> 8)
                                                                          & ~(byte)((uint)iVar105 >>
                                                                                   8),
                                                                          SUB41(fVar143,0) &
                                                                          ~(byte)iVar105)))))));
      auVar71[8] = SUB41(fVar68,0) & ~(byte)iVar149;
      auVar71[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar71[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar71[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      uVar208 = NEON_ext(auVar108._0_8_,auVar71._0_8_,4,1);
      auVar160 = NEON_ext(auVar108,auVar108,8,1);
      fVar38 = (float)((ulong)auVar39._0_8_ >> 0x20);
      fVar68 = auVar71._8_4_;
      auVar188 = NEON_fmov(0x3f800000,4);
      fVar15 = (float)_DAT_03889820 * fVar67 + (float)_DAT_0388a450 * fVar38 +
               (float)_DAT_03889eb0 * fVar68 + auVar188._0_4_;
      fVar104 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar67 +
                (float)((ulong)_DAT_0388a450 >> 0x20) * fVar38 +
                (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar68 + auVar188._4_4_;
      fVar143 = (float)_UNK_03889828 * fVar67 + (float)_UNK_0388a458 * fVar38 +
                (float)_UNK_03889eb8 * fVar68 + auVar188._8_4_;
      fVar38 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar67 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar38 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar68 + auVar188._12_4_;
      fVar68 = (float)((ulong)auVar71._0_8_ >> 0x20);
      auVar76._0_4_ = (float)uVar208 + fVar184;
      fVar67 = (float)((ulong)uVar208 >> 0x20);
      auVar76._4_4_ = fVar67 + auVar160._0_4_;
      auVar76._8_4_ = auVar39._8_4_ + fVar68;
      auVar76._12_4_ = 0;
      auVar109._0_4_ = (float)uVar208 - fVar184;
      auVar109._4_4_ = fVar67 - auVar160._0_4_;
      auVar109._8_4_ = auVar39._8_4_ - fVar68;
      auVar109._12_4_ = 0;
      uVar208 = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a888);
      uVar159 = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a710);
      auVar193._8_8_ = uVar159;
      auVar193._0_8_ = uVar208;
      uVar159 = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a758);
      auVar188._4_12_ = auVar193._4_12_;
      auVar188._0_4_ = fVar15;
      auVar164._0_8_ = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a880);
      uVar209 = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a640);
      auVar42._0_4_ = (undefined4)uVar208;
      auVar42._4_4_ = fVar104;
      auVar42._8_8_ = uVar159;
      auVar214._0_8_ = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a700);
      uVar208 = a64_TBL(ZEXT816(0),auVar76,auVar109,DAT_0388a590);
      auVar110._4_4_ = fVar104;
      auVar110._0_4_ = fVar104;
      auVar110._8_4_ = fVar104;
      auVar110._12_4_ = fVar104;
      auVar164._12_4_ = (undefined4)((ulong)uVar209 >> 0x20);
      auVar164._8_4_ = fVar143;
      auVar214._8_8_ = uVar208;
      auVar241._4_4_ = fVar15;
      auVar241._0_4_ = fVar15;
      auVar241._8_4_ = fVar15;
      auVar241._12_4_ = fVar15;
      auVar230._0_8_ = CONCAT44(-(uint)(fVar15 <= fVar104),-(uint)(fVar15 <= fVar104));
      auVar230._8_4_ = -(uint)(fVar15 <= fVar104);
      auVar230._12_4_ = -(uint)(fVar15 <= fVar104);
      auVar240._8_8_ = auVar230._8_8_;
      auVar240._0_8_ = auVar230._0_8_;
      auVar188 = auVar188 ^ (auVar188 ^ auVar42) & auVar230;
      auVar43._4_4_ = fVar143;
      auVar43._0_4_ = fVar143;
      auVar43._8_4_ = fVar143;
      auVar43._12_4_ = fVar143;
      auVar215._0_12_ = auVar214._0_12_;
      auVar215._12_4_ = fVar38;
      auVar241 = auVar241 ^ (auVar241 ^ auVar110) & auVar240;
      auVar77._0_8_ =
           CONCAT44(-(uint)(auVar241._4_4_ <= fVar143),-(uint)(auVar241._0_4_ <= fVar143));
      auVar77._8_4_ = -(uint)(auVar241._8_4_ <= fVar143);
      auVar77._12_4_ = -(uint)(auVar241._12_4_ <= fVar143);
      auVar111._8_8_ = auVar77._8_8_;
      auVar111._0_8_ = auVar77._0_8_;
      auVar188 = auVar188 ^ (auVar188 ^ auVar164) & auVar77;
      auVar241 = auVar241 ^ (auVar241 ^ auVar43) & auVar111;
      auVar160._0_4_ = -(uint)(auVar241._0_4_ <= fVar38);
      auVar160._4_4_ = -(uint)(auVar241._4_4_ <= fVar38);
      auVar160._8_4_ = -(uint)(auVar241._8_4_ <= fVar38);
      auVar160._12_4_ = -(uint)(auVar241._12_4_ <= fVar38);
      auVar188 = auVar188 ^ (auVar188 ^ auVar215) & auVar160;
      fVar143 = auVar188._0_4_;
      auVar44._0_4_ = fVar143 * fVar143;
      fVar38 = auVar188._4_4_;
      auVar44._4_4_ = fVar38 * fVar38;
      fVar68 = auVar188._8_4_;
      auVar44._8_4_ = fVar68 * fVar68;
      fVar184 = auVar188._12_4_;
      auVar44._12_4_ = fVar184 * fVar184;
      auVar160 = NEON_ext(auVar44,auVar44,8,1);
      fVar104 = auVar160._0_4_ + auVar44._0_4_;
      fVar67 = auVar160._4_4_ + auVar44._4_4_;
      fVar15 = fVar104 + fVar67;
      fVar104 = fVar104 + fVar67;
      auVar45._8_8_ = CONCAT44(fVar104,fVar15);
      auVar45._0_8_ = CONCAT44(fVar104,fVar15);
      auVar160 = NEON_frsqrte(auVar45,4);
      auVar112._0_4_ = auVar160._0_4_ * fVar15;
      auVar112._4_4_ = auVar160._4_4_ * fVar104;
      auVar112._8_4_ = auVar160._8_4_ * fVar15;
      auVar112._12_4_ = auVar160._12_4_ * fVar104;
      auVar188 = NEON_frsqrts(auVar160,auVar112,4);
      auVar78._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar78._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar78._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar78._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      auVar113._0_4_ = fVar15 * auVar78._0_4_;
      auVar113._4_4_ = fVar104 * auVar78._4_4_;
      auVar113._8_4_ = fVar15 * auVar78._8_4_;
      auVar113._12_4_ = fVar104 * auVar78._12_4_;
      iVar105 = -(uint)(fVar15 == 0.0);
      iVar144 = -(uint)(fVar104 == 0.0);
      iVar149 = -(uint)(fVar15 == 0.0);
      iVar154 = -(uint)(fVar104 == 0.0);
      auVar188 = NEON_frsqrts(auVar78,auVar113,4);
      fVar143 = auVar78._0_4_ * auVar188._0_4_ * fVar143;
      fVar38 = auVar78._4_4_ * auVar188._4_4_ * fVar38;
      fVar68 = auVar78._8_4_ * auVar188._8_4_ * fVar68;
      fVar184 = auVar78._12_4_ * auVar188._12_4_ * fVar184;
      fVar67 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                               CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                        ~(byte)((uint)iVar105 >> 0x10),
                                        CONCAT11((byte)((uint)fVar143 >> 8) &
                                                 ~(byte)((uint)iVar105 >> 8),
                                                 SUB41(fVar143,0) & ~(byte)iVar105)));
      auVar72._0_8_ =
           CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,fVar67))));
      auVar72[8] = SUB41(fVar68,0) & ~(byte)iVar149;
      auVar72[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar72[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar72[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      param_3[0xc] = SUB41(fVar184,0) & ~(byte)iVar154;
      param_3._0_12_ = auVar72;
      param_3[0xd] = (byte)((uint)fVar184 >> 8) & ~(byte)((uint)iVar154 >> 8);
      param_3[0xe] = (byte)((uint)fVar184 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
      param_3[0xf] = (byte)((uint)fVar184 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
      fVar15 = fVar67 - *(float *)(param_5 + 0x430);
      fVar68 = (float)((ulong)auVar72._0_8_ >> 0x20);
      fVar104 = fVar68 - *(float *)(param_5 + 0x434);
      fVar184 = auVar72._8_4_;
      fVar143 = fVar184 - *(float *)(param_5 + 0x438);
      fVar205 = param_3._12_4_;
      fVar38 = fVar205 - *(float *)(param_5 + 0x43c);
      auVar175._0_4_ = fVar15 * fVar15;
      auVar175._4_4_ = fVar104 * fVar104;
      auVar175._8_4_ = fVar143 * fVar143;
      auVar175._12_4_ = fVar38 * fVar38;
      auVar160 = NEON_ext(auVar175,auVar175,8,1);
      if (1.1920929e-07 < auVar160._0_4_ + auVar175._0_4_ + auVar160._4_4_ + auVar175._4_4_) {
        auVar46._0_4_ = fVar67 * fVar67;
        auVar46._4_4_ = fVar68 * fVar68;
        auVar46._8_4_ = fVar184 * fVar184;
        auVar46._12_4_ = fVar205 * fVar205;
        auVar160 = NEON_ext(auVar46,auVar46,8,1);
        fVar15 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
        fVar143 = auVar160._0_4_ + auVar46._0_4_;
        fVar38 = auVar160._4_4_ + auVar46._4_4_;
        fVar104 = fVar143 + fVar38;
        fVar143 = fVar143 + fVar38;
        auVar47._8_8_ = CONCAT44(fVar143,fVar104);
        auVar47._0_8_ = CONCAT44(fVar143,fVar104);
        auVar160 = NEON_frsqrte(auVar47,4);
        iVar105 = -(uint)(fVar104 < fVar15);
        iVar144 = -(uint)(fVar143 < fVar15);
        iVar149 = -(uint)(fVar104 < fVar15);
        iVar154 = -(uint)(fVar143 < fVar15);
        auVar114._0_4_ = auVar160._0_4_ * fVar104;
        auVar114._4_4_ = auVar160._4_4_ * fVar143;
        auVar114._8_4_ = auVar160._8_4_ * fVar104;
        auVar114._12_4_ = auVar160._12_4_ * fVar143;
        auVar188 = NEON_frsqrts(auVar160,auVar114,4);
        auVar79._0_4_ = auVar160._0_4_ * auVar188._0_4_;
        auVar79._4_4_ = auVar160._4_4_ * auVar188._4_4_;
        auVar79._8_4_ = auVar160._8_4_ * auVar188._8_4_;
        auVar79._12_4_ = auVar160._12_4_ * auVar188._12_4_;
        auVar115._0_4_ = fVar104 * auVar79._0_4_;
        auVar115._4_4_ = fVar143 * auVar79._4_4_;
        auVar115._8_4_ = fVar104 * auVar79._8_4_;
        auVar115._12_4_ = fVar143 * auVar79._12_4_;
        auVar188 = NEON_frsqrts(auVar79,auVar115,4);
        fVar15 = fVar67 * auVar79._0_4_ * auVar188._0_4_;
        fVar143 = fVar68 * auVar79._4_4_ * auVar188._4_4_;
        fVar38 = fVar184 * auVar79._8_4_ * auVar188._8_4_;
        fVar101 = fVar205 * auVar79._12_4_ * auVar188._12_4_;
        bVar103 = (byte)((uint)iVar105 >> 8);
        bVar139 = (byte)((uint)iVar105 >> 0x10);
        bVar140 = (byte)((uint)iVar105 >> 0x18);
        param_3[0] = SUB41(fVar15,0) & ~(byte)iVar105;
        param_3[1] = (byte)((uint)fVar15 >> 8) & ~bVar103;
        param_3[2] = (byte)((uint)fVar15 >> 0x10) & ~bVar139;
        param_3[3] = (byte)((uint)fVar15 >> 0x18) & ~bVar140;
        param_3[4] = SUB41(fVar143,0) & ~(byte)iVar144;
        param_3[5] = (byte)((uint)fVar143 >> 8) & ~(byte)((uint)iVar144 >> 8);
        param_3[6] = (byte)((uint)fVar143 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10);
        param_3[7] = (byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18);
        param_3[8] = SUB41(fVar38,0) & ~(byte)iVar149;
        param_3[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar149 >> 8);
        param_3[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
        param_3[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
        param_3[0xc] = SUB41(fVar101,0) & ~(byte)iVar154;
        param_3[0xd] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar154 >> 8);
        param_3[0xe] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
        param_3[0xf] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
        iVar105 = -(uint)((float)CONCAT13((byte)((uint)fVar104 >> 0x18) & ~bVar140,
                                          CONCAT12((byte)((uint)fVar104 >> 0x10) & ~bVar139,
                                                   CONCAT11((byte)((uint)fVar104 >> 8) & ~bVar103,
                                                            SUB41(fVar104,0) & ~(byte)iVar105))) ==
                         0.0);
        auVar18._8_8_ = _UNK_0388a138;
        auVar18._0_8_ = _DAT_0388a130;
        auVar17._0_4_ =
             CONCAT13(~(byte)((uint)iVar105 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar105 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar105 >> 8),~(byte)iVar105)));
        auVar17._4_4_ = auVar17._0_4_;
        auVar17._8_4_ = auVar17._0_4_;
        auVar17._12_4_ = auVar17._0_4_;
        auVar18 = auVar18 ^ (auVar18 ^ param_3) & auVar17;
        dStack_78 = auVar18._8_8_;
        local_80 = auVar18._0_8_;
        (**(code **)(**(long **)(param_5 + 0xd0) + 0x178))
                  (*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),&local_80,0,0);
        auVar5._8_4_ = fVar184;
        auVar5._0_8_ = CONCAT44(fVar68,fVar67);
        auVar5._12_4_ = fVar205;
        *(long *)(param_5 + 0x438) = auVar5._8_8_;
        *(ulong *)(param_5 + 0x430) = CONCAT44(fVar68,fVar67);
      }
      (**(code **)(*local_a0[0] + 0x40))();
      fVar15 = auVar188._0_4_ - *(float *)(param_5 + 0x420);
      fVar104 = auVar188._4_4_ - *(float *)(param_5 + 0x424);
      fVar143 = auVar188._8_4_ - *(float *)(param_5 + 0x428);
      fVar38 = auVar188._12_4_ - *(float *)(param_5 + 0x42c);
      auVar19._0_4_ = fVar15 * fVar15;
      auVar19._4_4_ = fVar104 * fVar104;
      auVar19._8_4_ = fVar143 * fVar143;
      auVar19._12_4_ = fVar38 * fVar38;
      auVar160 = NEON_ext(auVar19,auVar19,8,1);
      param_2 = ZEXT816(0x34000000);
      param_4 = auVar188;
      if (param_2._0_4_ < auVar160._0_4_ + auVar19._0_4_ + auVar160._4_4_ + auVar19._4_4_) {
        auVar160 = NEON_ext(auVar188,auVar188,8,1);
        param_2 = *(undefined1 (*) [16])(param_5 + 0x290);
        auVar20._0_8_ =
             (undefined8 *)CONCAT44(auVar188._4_4_ + param_2._4_4_,auVar188._0_4_ + param_2._0_4_);
        auVar20._8_4_ = auVar160._0_4_ + param_2._8_4_;
        auVar20._12_4_ = param_2._12_4_ + 0.0;
        dStack_78 = auVar20._8_8_;
        local_80 = auVar20._0_8_;
        FUN_02bd4a14(*(long *)(param_5 + 0xd0) + 0x18,*(undefined8 *)(param_5 + 0xd8),&local_80,0);
        *(long *)(param_5 + 0x428) = auVar188._8_8_;
        *(long *)(param_5 + 0x420) = auVar188._0_8_;
      }
      *(undefined8 *)(param_6 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_6 + 4));
      *(undefined1 *)(param_5 + 0x81) = 0;
      if (local_a0[0] != (long *)0x0) {
        lVar12 = local_a0[0][0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar105 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar105 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar105 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_a0[0] + 0x20))();
          cVar3 = *(char *)(param_5 + 0x80);
          goto joined_r0x02bd4850;
        }
      }
      goto LAB_02bd3558;
    }
    *(undefined1 *)(param_5 + 0x81) = 0;
    cVar3 = *(char *)(param_5 + 0x80);
joined_r0x02bd4850:
    if (cVar3 != '\0') goto LAB_02bd319c;
LAB_02bd3560:
    if (*(char *)(param_5 + 0x280) == '\0') goto LAB_02bd3f54;
    if (*(char *)(param_5 + 0x410) != '\0') {
      lVar12 = nn::os::GetCurrentThread();
      plVar10 = (long *)(param_6 + 0x10);
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_6 + 4));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02bd35b8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02bd35b8:
      uVar14 = *(uint *)(param_5 + 0x414);
      *(uint *)(param_5 + 0xe4) = uVar14;
      if (uVar14 != 2) {
        uVar14 = (uint)(uVar14 == 1);
      }
      (**(code **)(**(long **)(param_5 + 0xd0) + 0x1e0))
                (*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),uVar14,0,0);
      *(undefined1 *)(param_5 + 0x410) = 0;
      *(undefined8 *)(param_6 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_6 + 4));
    }
    iVar105 = *(int *)(param_5 + 0xe4);
    if (iVar105 == 2) {
      lVar12 = nn::os::GetCurrentThread();
      plVar10 = (long *)(param_6 + 0x10);
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_6 + 4));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02bd37ac;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02bd37ac:
      if (*(char *)(param_5 + 0x3d0) == '\0') {
        if (*(char *)(param_5 + 0x3f0) != '\0') {
          auVar160 = *(undefined1 (*) [16])(param_5 + 0x400);
          auVar188 = NEON_ext(auVar160,auVar160,8,1);
          plVar10 = *(long **)(param_5 + 0xd0);
          uVar208 = *(undefined8 *)(param_5 + 0xd8);
          param_3._8_8_ = auVar188._8_8_;
          param_3._0_8_ = (double)CONCAT44(0,auVar188._0_4_);
          local_80 = auVar160._0_8_;
          pcVar13 = *(code **)(*plVar10 + 0x1a0);
          dStack_78 = param_3._0_8_;
          goto LAB_02bd4800;
        }
LAB_02bd480c:
        if (*(char *)(param_5 + 0x3d0) != '\0') goto LAB_02bd3808;
LAB_02bd4814:
        cVar3 = *(char *)(param_5 + 0x3f0);
      }
      else {
        plVar10 = *(long **)(param_5 + 0xd0);
        uVar208 = *(undefined8 *)(param_5 + 0xd8);
        if (*(char *)(param_5 + 0x3f0) == '\0') {
          auVar160 = *(undefined1 (*) [16])(param_5 + 0x3e0);
          auVar188 = NEON_ext(auVar160,auVar160,8,1);
          param_3._8_8_ = auVar188._8_8_;
          param_3._0_8_ = (double)CONCAT44(0,auVar188._0_4_);
          local_80 = auVar160._0_8_;
          pcVar13 = *(code **)(*plVar10 + 0x198);
          dStack_78 = param_3._0_8_;
LAB_02bd4800:
          param_2 = ZEXT816(0);
          (*pcVar13)(plVar10,uVar208,&local_80,0);
          goto LAB_02bd480c;
        }
        local_80 = *(undefined8 **)(param_5 + 0x3e0);
        dStack_78 = (double)CONCAT44(0,*(uint *)(param_5 + 1000));
        param_3._8_8_ = 0;
        param_3._0_8_ = dStack_78;
        uStack_88 = CONCAT44(0,SUB164(*(undefined1 (*) [16])(param_5 + 0x400),8));
        param_2._8_8_ = 0;
        param_2._0_8_ = (double)uStack_88;
        local_90 = SUB168(*(undefined1 (*) [16])(param_5 + 0x400),0);
        (**(code **)(*plVar10 + 400))(plVar10,uVar208,&local_80,&local_90,0);
        if (*(char *)(param_5 + 0x3d0) == '\0') goto LAB_02bd4814;
LAB_02bd3808:
        *(undefined1 *)(param_5 + 0x3d0) = 0;
        cVar3 = *(char *)(param_5 + 0x3f0);
      }
      if (cVar3 != '\0') {
        *(undefined1 *)(param_5 + 0x3f0) = 0;
      }
      *(undefined8 *)(param_6 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_6 + 4));
      cVar3 = *(char *)(param_5 + 0x80);
    }
    else {
      if (iVar105 != 1) {
        if (iVar105 == 0) {
          local_80 = (undefined8 *)0x0;
          dStack_78 = 0.0;
          FUN_008c4b3c(&local_80,param_5 + 0x68);
          FUN_00956dac(local_a0,&local_80);
          puVar8 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_80 + 1);
            do {
              iVar105 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar105 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar105 + -1 == 0) {
              local_80[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar105 = __cxa_guard_acquire(PTR_DAT_04379498), iVar105 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_90 = *puVar8;
              FUN_02a44274(lVar12 + 0xd8,&local_90);
            }
          }
          if (local_a0[0] != (long *)0x0) {
            lVar12 = nn::os::GetCurrentThread();
            plVar10 = (long *)(param_6 + 0x10);
            do {
              if (*plVar10 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(param_6 + 4));
                  while (*plVar10 == 0) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                    if (bVar4) {
                      *plVar10 = lVar12;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_02bd386c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_02bd386c:
            (**(code **)(*local_a0[0] + 0x40))();
            auVar116._0_4_ = extraout_s0_00 * extraout_s0_00;
            auVar116._4_4_ = extraout_var_00 * extraout_var_00;
            auVar116._8_4_ = extraout_var_05 * extraout_var_05;
            auVar116._12_4_ = extraout_var_10 * extraout_var_10;
            auVar160 = NEON_ext(auVar116,auVar116,8,1);
            fVar104 = auVar160._0_4_ + auVar116._0_4_;
            fVar143 = auVar160._4_4_ + auVar116._4_4_;
            fVar15 = fVar104 + fVar143;
            fVar104 = fVar104 + fVar143;
            auVar117._8_8_ = CONCAT44(fVar104,fVar15);
            auVar117._0_8_ = CONCAT44(fVar104,fVar15);
            auVar160 = NEON_frsqrte(auVar117,4);
            auVar194._0_4_ = auVar160._0_4_ * fVar15;
            auVar194._4_4_ = auVar160._4_4_ * fVar104;
            auVar194._8_4_ = auVar160._8_4_ * fVar15;
            auVar194._12_4_ = auVar160._12_4_ * fVar104;
            auVar188 = NEON_frsqrts(auVar160,auVar194,4);
            auVar165._0_4_ = auVar160._0_4_ * auVar188._0_4_;
            auVar165._4_4_ = auVar160._4_4_ * auVar188._4_4_;
            auVar165._8_4_ = auVar160._8_4_ * auVar188._8_4_;
            auVar165._12_4_ = auVar160._12_4_ * auVar188._12_4_;
            auVar195._0_4_ = fVar15 * auVar165._0_4_;
            auVar195._4_4_ = fVar104 * auVar165._4_4_;
            auVar195._8_4_ = fVar15 * auVar165._8_4_;
            auVar195._12_4_ = fVar104 * auVar165._12_4_;
            iVar105 = -(uint)(fVar15 == 0.0);
            iVar144 = -(uint)(fVar104 == 0.0);
            iVar149 = -(uint)(fVar15 == 0.0);
            iVar154 = -(uint)(fVar104 == 0.0);
            auVar160 = NEON_frsqrts(auVar165,auVar195,4);
            fVar15 = extraout_s0_00 * auVar165._0_4_ * auVar160._0_4_;
            fVar104 = extraout_var_00 * auVar165._4_4_ * auVar160._4_4_;
            fVar143 = extraout_var_05 * auVar165._8_4_ * auVar160._8_4_;
            fVar38 = extraout_var_10 * auVar165._12_4_ * auVar160._12_4_;
            fVar67 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                                     CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                              ~(byte)((uint)iVar105 >> 0x10),
                                              CONCAT11((byte)((uint)fVar15 >> 8) &
                                                       ~(byte)((uint)iVar105 >> 8),
                                                       SUB41(fVar15,0) & ~(byte)iVar105)));
            auVar118._0_8_ =
                 CONCAT17((byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                          CONCAT16((byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                                   CONCAT15((byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar144 >> 8)
                                            ,CONCAT14(SUB41(fVar104,0) & ~(byte)iVar144,fVar67))));
            auVar118[8] = SUB41(fVar143,0) & ~(byte)iVar149;
            auVar118[9] = (byte)((uint)fVar143 >> 8) & ~(byte)((uint)iVar149 >> 8);
            auVar118[10] = (byte)((uint)fVar143 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
            auVar118[0xb] = (byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
            auVar118[0xc] = SUB41(fVar38,0) & ~(byte)iVar154;
            auVar118[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar154 >> 8);
            auVar118[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
            auVar118[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
            fVar143 = param_2._0_4_;
            auVar166._0_4_ = fVar143 * fVar143;
            fVar38 = param_2._4_4_;
            auVar166._4_4_ = fVar38 * fVar38;
            fVar68 = param_2._8_4_;
            auVar166._8_4_ = fVar68 * fVar68;
            auVar166._12_4_ = param_2._12_4_ * param_2._12_4_;
            auVar160 = NEON_ext(auVar166,auVar166,8,1);
            fVar104 = auVar160._0_4_ + auVar166._0_4_;
            fVar184 = auVar160._4_4_ + auVar166._4_4_;
            fVar15 = fVar104 + fVar184;
            fVar104 = fVar104 + fVar184;
            auVar167._8_8_ = CONCAT44(fVar104,fVar15);
            auVar167._0_8_ = CONCAT44(fVar104,fVar15);
            auVar160 = NEON_frsqrte(auVar167,4);
            auVar216._0_4_ = auVar160._0_4_ * fVar15;
            auVar216._4_4_ = auVar160._4_4_ * fVar104;
            auVar216._8_4_ = auVar160._8_4_ * fVar15;
            auVar216._12_4_ = auVar160._12_4_ * fVar104;
            auVar188 = NEON_frsqrts(auVar160,auVar216,4);
            auVar196._0_4_ = auVar160._0_4_ * auVar188._0_4_;
            auVar196._4_4_ = auVar160._4_4_ * auVar188._4_4_;
            auVar196._8_4_ = auVar160._8_4_ * auVar188._8_4_;
            auVar196._12_4_ = auVar160._12_4_ * auVar188._12_4_;
            auVar217._0_4_ = fVar15 * auVar196._0_4_;
            auVar217._4_4_ = fVar104 * auVar196._4_4_;
            auVar217._8_4_ = fVar15 * auVar196._8_4_;
            auVar217._12_4_ = fVar104 * auVar196._12_4_;
            iVar105 = -(uint)(fVar15 == 0.0);
            iVar144 = -(uint)(fVar104 == 0.0);
            iVar149 = -(uint)(fVar15 == 0.0);
            auVar160 = NEON_frsqrts(auVar196,auVar217,4);
            fVar143 = fVar143 * auVar196._0_4_ * auVar160._0_4_;
            fVar38 = fVar38 * auVar196._4_4_ * auVar160._4_4_;
            fVar68 = fVar68 * auVar196._8_4_ * auVar160._8_4_;
            fVar184 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18)
                                      ,CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                                ~(byte)((uint)iVar105 >> 0x10),
                                                CONCAT11((byte)((uint)fVar143 >> 8) &
                                                         ~(byte)((uint)iVar105 >> 8),
                                                         SUB41(fVar143,0) & ~(byte)iVar105)));
            auVar40._0_8_ =
                 CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                          CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                                   CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                            CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,fVar184))));
            auVar40[8] = SUB41(fVar68,0) & ~(byte)iVar149;
            auVar40[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
            auVar40[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
            auVar40[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
            fVar143 = param_3._0_4_;
            auVar197._0_4_ = fVar143 * fVar143;
            fVar38 = param_3._4_4_;
            auVar197._4_4_ = fVar38 * fVar38;
            fVar68 = param_3._8_4_;
            auVar197._8_4_ = fVar68 * fVar68;
            auVar197._12_4_ = param_3._12_4_ * param_3._12_4_;
            auVar160 = NEON_ext(auVar197,auVar197,8,1);
            fVar104 = auVar160._0_4_ + auVar197._0_4_;
            fVar205 = auVar160._4_4_ + auVar197._4_4_;
            fVar15 = fVar104 + fVar205;
            fVar104 = fVar104 + fVar205;
            auVar198._8_8_ = CONCAT44(fVar104,fVar15);
            auVar198._0_8_ = CONCAT44(fVar104,fVar15);
            auVar160 = NEON_frsqrte(auVar198,4);
            auVar231._0_4_ = auVar160._0_4_ * fVar15;
            auVar231._4_4_ = auVar160._4_4_ * fVar104;
            auVar231._8_4_ = auVar160._8_4_ * fVar15;
            auVar231._12_4_ = auVar160._12_4_ * fVar104;
            auVar188 = NEON_frsqrts(auVar160,auVar231,4);
            auVar218._0_4_ = auVar160._0_4_ * auVar188._0_4_;
            auVar218._4_4_ = auVar160._4_4_ * auVar188._4_4_;
            auVar218._8_4_ = auVar160._8_4_ * auVar188._8_4_;
            auVar218._12_4_ = auVar160._12_4_ * auVar188._12_4_;
            auVar232._0_4_ = fVar15 * auVar218._0_4_;
            auVar232._4_4_ = fVar104 * auVar218._4_4_;
            auVar232._8_4_ = fVar15 * auVar218._8_4_;
            auVar232._12_4_ = fVar104 * auVar218._12_4_;
            auVar160 = NEON_frsqrts(auVar218,auVar232,4);
            fVar143 = fVar143 * auVar218._0_4_ * auVar160._0_4_;
            fVar38 = fVar38 * auVar218._4_4_ * auVar160._4_4_;
            fVar68 = fVar68 * auVar218._8_4_ * auVar160._8_4_;
            iVar105 = -(uint)(fVar15 == 0.0);
            iVar144 = -(uint)(fVar104 == 0.0);
            iVar149 = -(uint)(fVar15 == 0.0);
            auVar73._0_8_ =
                 CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                          CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                                   CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                            CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,
                                                     CONCAT13((byte)((uint)fVar143 >> 0x18) &
                                                              ~(byte)((uint)iVar105 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar143 >> 0x10)
                                                                       & ~(byte)((uint)iVar105 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar143
                                                                                      >> 8) &
                                                                                ~(byte)((uint)
                                                  iVar105 >> 8),SUB41(fVar143,0) & ~(byte)iVar105)))
                                                  ))));
            auVar73[8] = SUB41(fVar68,0) & ~(byte)iVar149;
            auVar73[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
            auVar73[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
            auVar73[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
            uVar208 = NEON_ext(auVar118._0_8_,auVar73._0_8_,4,1);
            auVar160 = NEON_ext(auVar118,auVar118,8,1);
            fVar38 = (float)((ulong)auVar40._0_8_ >> 0x20);
            fVar68 = auVar73._8_4_;
            auVar188 = NEON_fmov(0x3f800000,4);
            fVar15 = (float)_DAT_03889820 * fVar67 + (float)_DAT_0388a450 * fVar38 +
                     (float)_DAT_03889eb0 * fVar68 + auVar188._0_4_;
            fVar104 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar67 +
                      (float)((ulong)_DAT_0388a450 >> 0x20) * fVar38 +
                      (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar68 + auVar188._4_4_;
            fVar143 = (float)_UNK_03889828 * fVar67 + (float)_UNK_0388a458 * fVar38 +
                      (float)_UNK_03889eb8 * fVar68 + auVar188._8_4_;
            fVar38 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar67 +
                     (float)((ulong)_UNK_0388a458 >> 0x20) * fVar38 +
                     (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar68 + auVar188._12_4_;
            fVar68 = (float)((ulong)auVar73._0_8_ >> 0x20);
            auVar80._0_4_ = (float)uVar208 + fVar184;
            fVar67 = (float)((ulong)uVar208 >> 0x20);
            auVar80._4_4_ = fVar67 + auVar160._0_4_;
            auVar80._8_4_ = auVar40._8_4_ + fVar68;
            auVar80._12_4_ = 0;
            auVar119._0_4_ = (float)uVar208 - fVar184;
            auVar119._4_4_ = fVar67 - auVar160._0_4_;
            auVar119._8_4_ = auVar40._8_4_ - fVar68;
            auVar119._12_4_ = 0;
            uVar208 = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a888);
            uVar159 = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a710);
            auVar199._8_8_ = uVar159;
            auVar199._0_8_ = uVar208;
            uVar159 = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a758);
            auVar234._4_12_ = auVar199._4_12_;
            auVar234._0_4_ = fVar15;
            auVar168._0_8_ = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a880);
            uVar209 = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a640);
            auVar48._0_4_ = (undefined4)uVar208;
            auVar48._4_4_ = fVar104;
            auVar48._8_8_ = uVar159;
            auVar219._0_8_ = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a700);
            uVar208 = a64_TBL(ZEXT816(0),auVar80,auVar119,DAT_0388a590);
            auVar120._4_4_ = fVar104;
            auVar120._0_4_ = fVar104;
            auVar120._8_4_ = fVar104;
            auVar120._12_4_ = fVar104;
            auVar168._12_4_ = (undefined4)((ulong)uVar209 >> 0x20);
            auVar168._8_4_ = fVar143;
            auVar219._8_8_ = uVar208;
            auVar243._4_4_ = fVar15;
            auVar243._0_4_ = fVar15;
            auVar243._8_4_ = fVar15;
            auVar243._12_4_ = fVar15;
            auVar233._0_8_ = CONCAT44(-(uint)(fVar15 <= fVar104),-(uint)(fVar15 <= fVar104));
            auVar233._8_4_ = -(uint)(fVar15 <= fVar104);
            auVar233._12_4_ = -(uint)(fVar15 <= fVar104);
            auVar242._8_8_ = auVar233._8_8_;
            auVar242._0_8_ = auVar233._0_8_;
            auVar234 = auVar234 ^ (auVar234 ^ auVar48) & auVar233;
            auVar49._4_4_ = fVar143;
            auVar49._0_4_ = fVar143;
            auVar49._8_4_ = fVar143;
            auVar49._12_4_ = fVar143;
            auVar220._0_12_ = auVar219._0_12_;
            auVar220._12_4_ = fVar38;
            auVar243 = auVar243 ^ (auVar243 ^ auVar120) & auVar242;
            auVar81._0_8_ =
                 CONCAT44(-(uint)(auVar243._4_4_ <= fVar143),-(uint)(auVar243._0_4_ <= fVar143));
            auVar81._8_4_ = -(uint)(auVar243._8_4_ <= fVar143);
            auVar81._12_4_ = -(uint)(auVar243._12_4_ <= fVar143);
            auVar121._8_8_ = auVar81._8_8_;
            auVar121._0_8_ = auVar81._0_8_;
            auVar234 = auVar234 ^ (auVar234 ^ auVar168) & auVar81;
            auVar243 = auVar243 ^ (auVar243 ^ auVar49) & auVar121;
            auVar21._0_4_ = -(uint)(auVar243._0_4_ <= fVar38);
            auVar21._4_4_ = -(uint)(auVar243._4_4_ <= fVar38);
            auVar21._8_4_ = -(uint)(auVar243._8_4_ <= fVar38);
            auVar21._12_4_ = -(uint)(auVar243._12_4_ <= fVar38);
            auVar234 = auVar234 ^ (auVar234 ^ auVar220) & auVar21;
            fVar143 = auVar234._0_4_;
            auVar50._0_4_ = fVar143 * fVar143;
            fVar38 = auVar234._4_4_;
            auVar50._4_4_ = fVar38 * fVar38;
            fVar68 = auVar234._8_4_;
            auVar50._8_4_ = fVar68 * fVar68;
            fVar184 = auVar234._12_4_;
            auVar50._12_4_ = fVar184 * fVar184;
            auVar160 = NEON_ext(auVar50,auVar50,8,1);
            fVar104 = auVar160._0_4_ + auVar50._0_4_;
            fVar67 = auVar160._4_4_ + auVar50._4_4_;
            fVar15 = fVar104 + fVar67;
            fVar104 = fVar104 + fVar67;
            auVar51._8_8_ = CONCAT44(fVar104,fVar15);
            auVar51._0_8_ = CONCAT44(fVar104,fVar15);
            auVar160 = NEON_frsqrte(auVar51,4);
            auVar122._0_4_ = auVar160._0_4_ * fVar15;
            auVar122._4_4_ = auVar160._4_4_ * fVar104;
            auVar122._8_4_ = auVar160._8_4_ * fVar15;
            auVar122._12_4_ = auVar160._12_4_ * fVar104;
            auVar188 = NEON_frsqrts(auVar160,auVar122,4);
            auVar82._0_4_ = auVar160._0_4_ * auVar188._0_4_;
            auVar82._4_4_ = auVar160._4_4_ * auVar188._4_4_;
            auVar82._8_4_ = auVar160._8_4_ * auVar188._8_4_;
            auVar82._12_4_ = auVar160._12_4_ * auVar188._12_4_;
            auVar123._0_4_ = fVar15 * auVar82._0_4_;
            auVar123._4_4_ = fVar104 * auVar82._4_4_;
            auVar123._8_4_ = fVar15 * auVar82._8_4_;
            auVar123._12_4_ = fVar104 * auVar82._12_4_;
            iVar105 = -(uint)(fVar15 == 0.0);
            iVar144 = -(uint)(fVar104 == 0.0);
            iVar149 = -(uint)(fVar15 == 0.0);
            iVar154 = -(uint)(fVar104 == 0.0);
            auVar188 = NEON_frsqrts(auVar82,auVar123,4);
            fVar143 = auVar82._0_4_ * auVar188._0_4_ * fVar143;
            fVar38 = auVar82._4_4_ * auVar188._4_4_ * fVar38;
            fVar68 = auVar82._8_4_ * auVar188._8_4_ * fVar68;
            fVar184 = auVar82._12_4_ * auVar188._12_4_ * fVar184;
            fVar67 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                                     CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                              ~(byte)((uint)iVar105 >> 0x10),
                                              CONCAT11((byte)((uint)fVar143 >> 8) &
                                                       ~(byte)((uint)iVar105 >> 8),
                                                       SUB41(fVar143,0) & ~(byte)iVar105)));
            auVar74._0_8_ =
                 CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                          CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                                   CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                            CONCAT14(SUB41(fVar38,0) & ~(byte)iVar144,fVar67))));
            auVar74[8] = SUB41(fVar68,0) & ~(byte)iVar149;
            auVar74[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
            auVar74[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
            auVar74[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
            param_3[0xc] = SUB41(fVar184,0) & ~(byte)iVar154;
            param_3._0_12_ = auVar74;
            param_3[0xd] = (byte)((uint)fVar184 >> 8) & ~(byte)((uint)iVar154 >> 8);
            param_3[0xe] = (byte)((uint)fVar184 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
            param_3[0xf] = (byte)((uint)fVar184 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
            fVar15 = fVar67 - *(float *)(param_5 + 0x430);
            fVar68 = (float)((ulong)auVar74._0_8_ >> 0x20);
            fVar104 = fVar68 - *(float *)(param_5 + 0x434);
            fVar184 = auVar74._8_4_;
            fVar143 = fVar184 - *(float *)(param_5 + 0x438);
            fVar205 = param_3._12_4_;
            fVar38 = fVar205 - *(float *)(param_5 + 0x43c);
            auVar22._0_4_ = fVar15 * fVar15;
            auVar22._4_4_ = fVar104 * fVar104;
            auVar22._8_4_ = fVar143 * fVar143;
            auVar22._12_4_ = fVar38 * fVar38;
            auVar160 = NEON_ext(auVar22,auVar22,8,1);
            if (1.1920929e-07 < auVar160._0_4_ + auVar22._0_4_ + auVar160._4_4_ + auVar22._4_4_) {
              auVar52._0_4_ = fVar67 * fVar67;
              auVar52._4_4_ = fVar68 * fVar68;
              auVar52._8_4_ = fVar184 * fVar184;
              auVar52._12_4_ = fVar205 * fVar205;
              auVar160 = NEON_ext(auVar52,auVar52,8,1);
              fVar15 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
              fVar143 = auVar160._0_4_ + auVar52._0_4_;
              fVar38 = auVar160._4_4_ + auVar52._4_4_;
              fVar104 = fVar143 + fVar38;
              fVar143 = fVar143 + fVar38;
              auVar53._8_8_ = CONCAT44(fVar143,fVar104);
              auVar53._0_8_ = CONCAT44(fVar143,fVar104);
              auVar160 = NEON_frsqrte(auVar53,4);
              iVar105 = -(uint)(fVar104 < fVar15);
              iVar144 = -(uint)(fVar143 < fVar15);
              iVar149 = -(uint)(fVar104 < fVar15);
              iVar154 = -(uint)(fVar143 < fVar15);
              auVar124._0_4_ = auVar160._0_4_ * fVar104;
              auVar124._4_4_ = auVar160._4_4_ * fVar143;
              auVar124._8_4_ = auVar160._8_4_ * fVar104;
              auVar124._12_4_ = auVar160._12_4_ * fVar143;
              auVar188 = NEON_frsqrts(auVar160,auVar124,4);
              auVar83._0_4_ = auVar160._0_4_ * auVar188._0_4_;
              auVar83._4_4_ = auVar160._4_4_ * auVar188._4_4_;
              auVar83._8_4_ = auVar160._8_4_ * auVar188._8_4_;
              auVar83._12_4_ = auVar160._12_4_ * auVar188._12_4_;
              auVar125._0_4_ = fVar104 * auVar83._0_4_;
              auVar125._4_4_ = fVar143 * auVar83._4_4_;
              auVar125._8_4_ = fVar104 * auVar83._8_4_;
              auVar125._12_4_ = fVar143 * auVar83._12_4_;
              auVar188 = NEON_frsqrts(auVar83,auVar125,4);
              fVar15 = fVar67 * auVar83._0_4_ * auVar188._0_4_;
              fVar143 = fVar68 * auVar83._4_4_ * auVar188._4_4_;
              fVar38 = fVar184 * auVar83._8_4_ * auVar188._8_4_;
              fVar101 = fVar205 * auVar83._12_4_ * auVar188._12_4_;
              bVar103 = (byte)((uint)iVar105 >> 8);
              bVar139 = (byte)((uint)iVar105 >> 0x10);
              bVar140 = (byte)((uint)iVar105 >> 0x18);
              param_3[0] = SUB41(fVar15,0) & ~(byte)iVar105;
              param_3[1] = (byte)((uint)fVar15 >> 8) & ~bVar103;
              param_3[2] = (byte)((uint)fVar15 >> 0x10) & ~bVar139;
              param_3[3] = (byte)((uint)fVar15 >> 0x18) & ~bVar140;
              param_3[4] = SUB41(fVar143,0) & ~(byte)iVar144;
              param_3[5] = (byte)((uint)fVar143 >> 8) & ~(byte)((uint)iVar144 >> 8);
              param_3[6] = (byte)((uint)fVar143 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10);
              param_3[7] = (byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18);
              param_3[8] = SUB41(fVar38,0) & ~(byte)iVar149;
              param_3[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar149 >> 8);
              param_3[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
              param_3[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
              param_3[0xc] = SUB41(fVar101,0) & ~(byte)iVar154;
              param_3[0xd] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar154 >> 8);
              param_3[0xe] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
              param_3[0xf] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
              iVar105 = -(uint)((float)CONCAT13((byte)((uint)fVar104 >> 0x18) & ~bVar140,
                                                CONCAT12((byte)((uint)fVar104 >> 0x10) & ~bVar139,
                                                         CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                  ~bVar103,SUB41(fVar104,0) &
                                                                           ~(byte)iVar105))) == 0.0)
              ;
              auVar24._8_8_ = _UNK_0388a138;
              auVar24._0_8_ = _DAT_0388a130;
              auVar23._0_4_ =
                   CONCAT13(~(byte)((uint)iVar105 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar105 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar105 >> 8),~(byte)iVar105)));
              auVar23._4_4_ = auVar23._0_4_;
              auVar23._8_4_ = auVar23._0_4_;
              auVar23._12_4_ = auVar23._0_4_;
              auVar24 = auVar24 ^ (auVar24 ^ param_3) & auVar23;
              dStack_78 = auVar24._8_8_;
              local_80 = auVar24._0_8_;
              (**(code **)(**(long **)(param_5 + 0xd0) + 0x178))
                        (*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),&local_80,0,0);
              auVar6._8_4_ = fVar184;
              auVar6._0_8_ = CONCAT44(fVar68,fVar67);
              auVar6._12_4_ = fVar205;
              *(long *)(param_5 + 0x438) = auVar6._8_8_;
              *(ulong *)(param_5 + 0x430) = CONCAT44(fVar68,fVar67);
            }
            (**(code **)(*local_a0[0] + 0x40))();
            fVar15 = auVar188._0_4_ - *(float *)(param_5 + 0x420);
            fVar104 = auVar188._4_4_ - *(float *)(param_5 + 0x424);
            fVar143 = auVar188._8_4_ - *(float *)(param_5 + 0x428);
            fVar38 = auVar188._12_4_ - *(float *)(param_5 + 0x42c);
            auVar25._0_4_ = fVar15 * fVar15;
            auVar25._4_4_ = fVar104 * fVar104;
            auVar25._8_4_ = fVar143 * fVar143;
            auVar25._12_4_ = fVar38 * fVar38;
            auVar160 = NEON_ext(auVar25,auVar25,8,1);
            param_2 = ZEXT816(0x34000000);
            if (param_2._0_4_ < auVar160._0_4_ + auVar25._0_4_ + auVar160._4_4_ + auVar25._4_4_) {
              auVar160 = NEON_ext(auVar188,auVar188,8,1);
              param_2 = *(undefined1 (*) [16])(param_5 + 0x290);
              auVar26._0_8_ =
                   (undefined8 *)
                   CONCAT44(auVar188._4_4_ + param_2._4_4_,auVar188._0_4_ + param_2._0_4_);
              auVar26._8_4_ = auVar160._0_4_ + param_2._8_4_;
              auVar26._12_4_ = param_2._12_4_ + 0.0;
              dStack_78 = auVar26._8_8_;
              local_80 = auVar26._0_8_;
              FUN_02bd4a14(*(long *)(param_5 + 0xd0) + 0x18,*(undefined8 *)(param_5 + 0xd8),
                           &local_80,0);
              *(long *)(param_5 + 0x428) = auVar188._8_8_;
              *(long *)(param_5 + 0x420) = auVar188._0_8_;
            }
            *(undefined8 *)(param_6 + 0x10) = 0;
            nn::os::SignalLightEvent((LightEventType *)(param_6 + 4));
            if (local_a0[0] != (long *)0x0) {
              lVar12 = local_a0[0][0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar105 = *piVar1 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar105;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                local_38 = local_a0[0];
              } while (cVar3 != '\0');
              goto LAB_02bd3f50;
            }
          }
        }
        goto LAB_02bd3f54;
      }
      local_80 = (undefined8 *)0x0;
      dStack_78 = 0.0;
      FUN_008c4b3c(&local_80,param_5 + 0x68);
      FUN_00956dac(&local_38,&local_80);
      puVar8 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar105 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar105 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar105 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar105 = __cxa_guard_acquire(PTR_DAT_04379498), iVar105 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_90 = *puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_90);
        }
      }
      if (local_38 == (long *)0x0) goto LAB_02bd3f54;
      lVar12 = nn::os::GetCurrentThread();
      plVar10 = (long *)(param_6 + 0x10);
      do {
        if (*plVar10 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_6 + 4));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02bd3c18;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02bd3c18:
      uVar208 = *(undefined8 *)(param_5 + 0xd8);
      lVar12 = 0;
      if (*(long *)(param_5 + 0xd0) != 0) {
        lVar12 = *(long *)(param_5 + 0xd0) + 0x20;
      }
      (**(code **)(*local_38 + 0x40))();
      local_c0 = param_4._0_4_;
      fStack_bc = param_4._4_4_;
      (**(code **)(*local_38 + 0x40))();
      auVar126._0_4_ = extraout_s0_01 * extraout_s0_01;
      auVar126._4_4_ = extraout_var_01 * extraout_var_01;
      auVar126._8_4_ = extraout_var_06 * extraout_var_06;
      auVar126._12_4_ = extraout_var_11 * extraout_var_11;
      fVar67 = param_2._0_4_;
      auVar169._0_4_ = fVar67 * fVar67;
      fVar205 = param_2._4_4_;
      auVar169._4_4_ = fVar205 * fVar205;
      fVar101 = param_2._8_4_;
      auVar169._8_4_ = fVar101 * fVar101;
      auVar169._12_4_ = param_2._12_4_ * param_2._12_4_;
      fVar69 = param_3._0_4_;
      auVar200._0_4_ = fVar69 * fVar69;
      fVar99 = param_3._4_4_;
      auVar200._4_4_ = fVar99 * fVar99;
      fVar100 = param_3._8_4_;
      auVar200._8_4_ = fVar100 * fVar100;
      auVar200._12_4_ = param_3._12_4_ * param_3._12_4_;
      auVar188 = NEON_ext(auVar169,auVar169,8,1);
      auVar160 = NEON_ext(auVar126,auVar126,8,1);
      fVar38 = auVar160._0_4_ + auVar126._0_4_;
      fVar104 = auVar160._4_4_ + auVar126._4_4_;
      fVar15 = fVar38 + fVar104;
      fVar38 = fVar38 + fVar104;
      fVar68 = auVar188._0_4_ + auVar169._0_4_;
      fVar143 = auVar188._4_4_ + auVar169._4_4_;
      auVar127._8_8_ = CONCAT44(fVar38,fVar15);
      auVar127._0_8_ = CONCAT44(fVar38,fVar15);
      fVar104 = fVar68 + fVar143;
      fVar68 = fVar68 + fVar143;
      auVar160 = NEON_frsqrte(auVar127,4);
      auVar188 = NEON_ext(auVar200,auVar200,8,1);
      auVar170._8_8_ = CONCAT44(fVar68,fVar104);
      auVar170._0_8_ = CONCAT44(fVar68,fVar104);
      fVar184 = auVar188._0_4_ + auVar200._0_4_;
      fVar102 = auVar188._4_4_ + auVar200._4_4_;
      auVar254._0_4_ = auVar160._0_4_ * fVar15;
      auVar254._4_4_ = auVar160._4_4_ * fVar38;
      auVar254._8_4_ = auVar160._8_4_ * fVar15;
      auVar254._12_4_ = auVar160._12_4_ * fVar38;
      fVar143 = fVar184 + fVar102;
      fVar184 = fVar184 + fVar102;
      auVar188 = NEON_frsqrte(auVar170,4);
      auVar175 = NEON_frsqrts(auVar160,auVar254,4);
      auVar201._8_8_ = CONCAT44(fVar184,fVar143);
      auVar201._0_8_ = CONCAT44(fVar184,fVar143);
      auVar221._0_4_ = auVar160._0_4_ * auVar175._0_4_;
      auVar221._4_4_ = auVar160._4_4_ * auVar175._4_4_;
      auVar221._8_4_ = auVar160._8_4_ * auVar175._8_4_;
      auVar221._12_4_ = auVar160._12_4_ * auVar175._12_4_;
      auVar255._0_4_ = auVar188._0_4_ * fVar104;
      auVar255._4_4_ = auVar188._4_4_ * fVar68;
      auVar255._8_4_ = auVar188._8_4_ * fVar104;
      auVar255._12_4_ = auVar188._12_4_ * fVar68;
      auVar160 = NEON_frsqrte(auVar201,4);
      auVar175 = NEON_frsqrts(auVar188,auVar255,4);
      auVar235._0_4_ = auVar188._0_4_ * auVar175._0_4_;
      auVar235._4_4_ = auVar188._4_4_ * auVar175._4_4_;
      auVar235._8_4_ = auVar188._8_4_ * auVar175._8_4_;
      auVar235._12_4_ = auVar188._12_4_ * auVar175._12_4_;
      auVar256._0_4_ = auVar160._0_4_ * fVar143;
      auVar256._4_4_ = auVar160._4_4_ * fVar184;
      auVar256._8_4_ = auVar160._8_4_ * fVar143;
      auVar256._12_4_ = auVar160._12_4_ * fVar184;
      auVar188 = NEON_frsqrts(auVar160,auVar256,4);
      auVar244._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar244._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar244._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar244._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      auVar257._0_4_ = fVar15 * auVar221._0_4_;
      auVar257._4_4_ = fVar38 * auVar221._4_4_;
      auVar257._8_4_ = fVar15 * auVar221._8_4_;
      auVar257._12_4_ = fVar38 * auVar221._12_4_;
      iVar105 = -(uint)(fVar15 == 0.0);
      iVar144 = -(uint)(fVar38 == 0.0);
      iVar149 = -(uint)(fVar15 == 0.0);
      iVar154 = -(uint)(fVar38 == 0.0);
      auVar160 = NEON_frsqrts(auVar221,auVar257,4);
      auVar258._0_4_ = fVar104 * auVar235._0_4_;
      auVar258._4_4_ = fVar68 * auVar235._4_4_;
      auVar258._8_4_ = fVar104 * auVar235._8_4_;
      auVar258._12_4_ = fVar68 * auVar235._12_4_;
      iVar158 = -(uint)(fVar104 == 0.0);
      iVar185 = -(uint)(fVar68 == 0.0);
      iVar186 = -(uint)(fVar104 == 0.0);
      auVar188 = NEON_frsqrts(auVar235,auVar258,4);
      fVar15 = extraout_s0_01 * auVar221._0_4_ * auVar160._0_4_;
      fVar104 = extraout_var_01 * auVar221._4_4_ * auVar160._4_4_;
      fVar38 = extraout_var_06 * auVar221._8_4_ * auVar160._8_4_;
      fVar68 = extraout_var_11 * auVar221._12_4_ * auVar160._12_4_;
      fVar15 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                               CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                        ~(byte)((uint)iVar105 >> 0x10),
                                        CONCAT11((byte)((uint)fVar15 >> 8) &
                                                 ~(byte)((uint)iVar105 >> 8),
                                                 SUB41(fVar15,0) & ~(byte)iVar105)));
      auVar27._0_8_ =
           CONCAT17((byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar104,0) & ~(byte)iVar144,fVar15))));
      auVar27[8] = SUB41(fVar38,0) & ~(byte)iVar149;
      auVar27[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar27[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar27[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      auVar27[0xc] = SUB41(fVar68,0) & ~(byte)iVar154;
      auVar27[0xd] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar154 >> 8);
      auVar27[0xe] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
      auVar27[0xf] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
      auVar259._0_4_ = fVar143 * auVar244._0_4_;
      auVar259._4_4_ = fVar184 * auVar244._4_4_;
      auVar259._8_4_ = fVar143 * auVar244._8_4_;
      auVar259._12_4_ = fVar184 * auVar244._12_4_;
      iVar105 = -(uint)(fVar143 == 0.0);
      iVar144 = -(uint)(fVar184 == 0.0);
      iVar149 = -(uint)(fVar143 == 0.0);
      auVar160 = NEON_frsqrts(auVar244,auVar259,4);
      fVar67 = fVar67 * auVar235._0_4_ * auVar188._0_4_;
      fVar205 = fVar205 * auVar235._4_4_ * auVar188._4_4_;
      fVar101 = fVar101 * auVar235._8_4_ * auVar188._8_4_;
      fVar104 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar158 >> 0x18),
                                CONCAT12((byte)((uint)fVar67 >> 0x10) &
                                         ~(byte)((uint)iVar158 >> 0x10),
                                         CONCAT11((byte)((uint)fVar67 >> 8) &
                                                  ~(byte)((uint)iVar158 >> 8),
                                                  SUB41(fVar67,0) & ~(byte)iVar158)));
      auVar41._0_8_ =
           CONCAT17((byte)((uint)fVar205 >> 0x18) & ~(byte)((uint)iVar185 >> 0x18),
                    CONCAT16((byte)((uint)fVar205 >> 0x10) & ~(byte)((uint)iVar185 >> 0x10),
                             CONCAT15((byte)((uint)fVar205 >> 8) & ~(byte)((uint)iVar185 >> 8),
                                      CONCAT14(SUB41(fVar205,0) & ~(byte)iVar185,fVar104))));
      auVar41[8] = SUB41(fVar101,0) & ~(byte)iVar186;
      auVar41[9] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar186 >> 8);
      auVar41[10] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar186 >> 0x10);
      auVar41[0xb] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar186 >> 0x18);
      fVar69 = fVar69 * auVar244._0_4_ * auVar160._0_4_;
      fVar99 = fVar99 * auVar244._4_4_ * auVar160._4_4_;
      fVar100 = fVar100 * auVar244._8_4_ * auVar160._8_4_;
      auVar75._0_8_ =
           CONCAT17((byte)((uint)fVar99 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar99 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar99 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar99,0) & ~(byte)iVar144,
                                               CONCAT13((byte)((uint)fVar69 >> 0x18) &
                                                        ~(byte)((uint)iVar105 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar69 >> 0x10) &
                                                                 ~(byte)((uint)iVar105 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar69 >> 8)
                                                                          & ~(byte)((uint)iVar105 >>
                                                                                   8),
                                                                          SUB41(fVar69,0) &
                                                                          ~(byte)iVar105)))))));
      auVar75[8] = SUB41(fVar100,0) & ~(byte)iVar149;
      auVar75[9] = (byte)((uint)fVar100 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar75[10] = (byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar75[0xb] = (byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      auVar160 = NEON_ext(auVar27,auVar27,8,1);
      fVar143 = (float)((ulong)auVar75._0_8_ >> 0x20);
      uVar159 = NEON_ext(auVar27._0_8_,auVar75._0_8_,4,1);
      fVar68 = (float)((ulong)auVar41._0_8_ >> 0x20);
      auVar245._0_4_ = (float)uVar159 + fVar104;
      fVar38 = (float)((ulong)uVar159 >> 0x20);
      auVar245._4_4_ = fVar38 + auVar160._0_4_;
      auVar245._8_4_ = auVar41._8_4_ + fVar143;
      auVar245._12_4_ = 0;
      auVar260._0_4_ = (float)uVar159 - fVar104;
      auVar260._4_4_ = fVar38 - auVar160._0_4_;
      auVar260._8_4_ = auVar41._8_4_ - fVar143;
      auVar260._12_4_ = 0;
      fVar184 = auVar75._8_4_;
      auVar160 = NEON_fmov(0x3f800000,4);
      uVar70 = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a710);
      uVar159 = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a758);
      auVar84._0_8_ = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a880);
      uVar210 = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a640);
      auVar222._0_8_ = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a700);
      fVar104 = (float)_DAT_03889820 * fVar15 + (float)_DAT_0388a450 * fVar68 +
                (float)_DAT_03889eb0 * fVar184 + auVar160._0_4_;
      fVar143 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar15 +
                (float)((ulong)_DAT_0388a450 >> 0x20) * fVar68 +
                (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar184 + auVar160._4_4_;
      fVar38 = (float)_UNK_03889828 * fVar15 + (float)_UNK_0388a458 * fVar68 +
               (float)_UNK_03889eb8 * fVar184 + auVar160._8_4_;
      fVar15 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar15 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar68 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar184 + auVar160._12_4_;
      uVar209 = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a888);
      uVar227 = a64_TBL(ZEXT816(0),auVar245,auVar260,DAT_0388a590);
      auVar202._4_4_ = fVar104;
      auVar202._0_4_ = fVar104;
      auVar202._8_4_ = fVar104;
      auVar202._12_4_ = fVar104;
      auVar246._8_8_ = uVar70;
      auVar246._0_8_ = uVar209;
      auVar171._4_4_ = fVar143;
      auVar171._0_4_ = fVar143;
      auVar171._8_4_ = fVar143;
      auVar171._12_4_ = fVar143;
      auVar84._12_4_ = (undefined4)((ulong)uVar210 >> 0x20);
      auVar84._8_4_ = fVar38;
      auVar222._8_8_ = uVar227;
      local_68 = 0;
      auVar261._0_4_ = -(uint)(fVar104 <= fVar143);
      auVar261._4_4_ = -(uint)(fVar104 <= fVar143);
      auVar261._8_4_ = -(uint)(fVar104 <= fVar143);
      auVar261._12_4_ = -(uint)(fVar104 <= fVar143);
      auVar128._0_4_ = (undefined4)uVar209;
      auVar128._4_4_ = fVar143;
      auVar128._8_8_ = uVar159;
      in_q17._4_12_ = auVar246._4_12_;
      in_q17._0_4_ = fVar104;
      auVar223._0_12_ = auVar222._0_12_;
      auVar223._12_4_ = fVar15;
      auVar202 = auVar202 ^ (auVar202 ^ auVar171) & auVar261;
      auVar54._4_4_ = fVar38;
      auVar54._0_4_ = fVar38;
      auVar54._8_4_ = fVar38;
      auVar54._12_4_ = fVar38;
      auVar172._0_8_ = CONCAT44(-(uint)(auVar202._4_4_ <= fVar38),-(uint)(auVar202._0_4_ <= fVar38))
      ;
      auVar172._8_4_ = -(uint)(auVar202._8_4_ <= fVar38);
      auVar172._12_4_ = -(uint)(auVar202._12_4_ <= fVar38);
      in_q17 = in_q17 ^ (in_q17 ^ auVar128) & auVar261;
      auVar236._8_8_ = auVar172._8_8_;
      auVar236._0_8_ = auVar172._0_8_;
      auVar160 = in_q17 ^ (in_q17 ^ auVar84) & auVar172;
      auVar202 = auVar202 ^ (auVar202 ^ auVar54) & auVar236;
      auVar28._0_4_ = -(uint)(auVar202._0_4_ <= fVar15);
      auVar28._4_4_ = -(uint)(auVar202._4_4_ <= fVar15);
      auVar28._8_4_ = -(uint)(auVar202._8_4_ <= fVar15);
      auVar28._12_4_ = -(uint)(auVar202._12_4_ <= fVar15);
      auVar160 = auVar160 ^ (auVar160 ^ auVar223) & auVar28;
      fVar143 = auVar160._0_4_;
      auVar55._0_4_ = fVar143 * fVar143;
      fVar68 = auVar160._4_4_;
      auVar55._4_4_ = fVar68 * fVar68;
      fVar184 = auVar160._8_4_;
      auVar55._8_4_ = fVar184 * fVar184;
      fVar67 = auVar160._12_4_;
      auVar55._12_4_ = fVar67 * fVar67;
      auVar160 = NEON_ext(auVar55,auVar55,8,1);
      fVar104 = auVar160._0_4_ + auVar55._0_4_;
      fVar38 = auVar160._4_4_ + auVar55._4_4_;
      fVar15 = fVar104 + fVar38;
      fVar104 = fVar104 + fVar38;
      local_80 = (undefined8 *)(double)local_c0;
      auVar56._8_8_ = CONCAT44(fVar104,fVar15);
      auVar56._0_8_ = CONCAT44(fVar104,fVar15);
      auVar160 = NEON_frsqrte(auVar56,4);
      auVar129._0_4_ = auVar160._0_4_ * fVar15;
      auVar129._4_4_ = auVar160._4_4_ * fVar104;
      auVar129._8_4_ = auVar160._8_4_ * fVar15;
      auVar129._12_4_ = auVar160._12_4_ * fVar104;
      auVar188 = NEON_frsqrts(auVar160,auVar129,4);
      auVar85._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar85._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar85._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar85._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      auVar130._0_4_ = fVar15 * auVar85._0_4_;
      auVar130._4_4_ = fVar104 * auVar85._4_4_;
      auVar130._8_4_ = fVar15 * auVar85._8_4_;
      auVar130._12_4_ = fVar104 * auVar85._12_4_;
      iVar105 = -(uint)(fVar15 == 0.0);
      iVar144 = -(uint)(fVar104 == 0.0);
      iVar149 = -(uint)(fVar15 == 0.0);
      iVar154 = -(uint)(fVar104 == 0.0);
      auVar160 = NEON_frsqrts(auVar85,auVar130,4);
      fVar143 = auVar85._0_4_ * auVar160._0_4_ * fVar143;
      fVar68 = auVar85._4_4_ * auVar160._4_4_ * fVar68;
      fVar184 = auVar85._8_4_ * auVar160._8_4_ * fVar184;
      fVar67 = auVar85._12_4_ * auVar160._12_4_ * fVar67;
      fVar38 = (float)CONCAT13((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                               CONCAT12((byte)((uint)fVar143 >> 0x10) &
                                        ~(byte)((uint)iVar105 >> 0x10),
                                        CONCAT11((byte)((uint)fVar143 >> 8) &
                                                 ~(byte)((uint)iVar105 >> 8),
                                                 SUB41(fVar143,0) & ~(byte)iVar105)));
      auVar16._0_8_ =
           CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                    CONCAT16((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar144 >> 0x10),
                             CONCAT15((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar144 >> 8),
                                      CONCAT14(SUB41(fVar68,0) & ~(byte)iVar144,fVar38))));
      auVar16[8] = SUB41(fVar184,0) & ~(byte)iVar149;
      auVar16[9] = (byte)((uint)fVar184 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar16[10] = (byte)((uint)fVar184 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar16[0xb] = (byte)((uint)fVar184 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      auVar29[0xc] = SUB41(fVar67,0) & ~(byte)iVar154;
      auVar29._0_12_ = auVar16;
      auVar29[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar154 >> 8);
      auVar29[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
      auVar29[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
      auVar57._0_4_ = fVar38 * fVar38;
      fVar68 = (float)((ulong)auVar16._0_8_ >> 0x20);
      auVar57._4_4_ = fVar68 * fVar68;
      fVar184 = auVar16._8_4_;
      auVar57._8_4_ = fVar184 * fVar184;
      fVar67 = auVar29._12_4_;
      auVar57._12_4_ = fVar67 * fVar67;
      auVar160 = NEON_ext(auVar57,auVar57,8,1);
      fVar143 = auVar160._0_4_ + auVar57._0_4_;
      fVar15 = auVar160._4_4_ + auVar57._4_4_;
      fVar104 = fVar143 + fVar15;
      fVar143 = fVar143 + fVar15;
      auVar58._8_8_ = CONCAT44(fVar143,fVar104);
      auVar58._0_8_ = CONCAT44(fVar143,fVar104);
      auVar160 = NEON_frsqrte(auVar58,4);
      auVar131._0_4_ = auVar160._0_4_ * fVar104;
      auVar131._4_4_ = auVar160._4_4_ * fVar143;
      auVar131._8_4_ = auVar160._8_4_ * fVar104;
      auVar131._12_4_ = auVar160._12_4_ * fVar143;
      auVar188 = NEON_frsqrts(auVar160,auVar131,4);
      auVar86._0_4_ = auVar160._0_4_ * auVar188._0_4_;
      auVar86._4_4_ = auVar160._4_4_ * auVar188._4_4_;
      auVar86._8_4_ = auVar160._8_4_ * auVar188._8_4_;
      auVar86._12_4_ = auVar160._12_4_ * auVar188._12_4_;
      fVar15 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
      auVar60._8_8_ = _UNK_0388a138;
      auVar60._0_8_ = _DAT_0388a130;
      auVar203._0_4_ = fVar104 * auVar86._0_4_;
      auVar203._4_4_ = fVar143 * auVar86._4_4_;
      auVar203._8_4_ = fVar104 * auVar86._8_4_;
      auVar203._12_4_ = fVar143 * auVar86._12_4_;
      iVar144 = -(uint)(fVar104 < fVar15);
      iVar149 = -(uint)(fVar143 < fVar15);
      iVar154 = -(uint)(fVar104 < fVar15);
      iVar158 = -(uint)(fVar143 < fVar15);
      bVar103 = (byte)((uint)iVar144 >> 8);
      bVar139 = (byte)((uint)iVar144 >> 0x10);
      bVar140 = (byte)((uint)iVar144 >> 0x18);
      auVar160 = NEON_frsqrts(auVar86,auVar203,4);
      iVar105 = -(uint)((float)CONCAT13((byte)((uint)fVar104 >> 0x18) & ~bVar140,
                                        CONCAT12((byte)((uint)fVar104 >> 0x10) & ~bVar139,
                                                 CONCAT11((byte)((uint)fVar104 >> 8) & ~bVar103,
                                                          SUB41(fVar104,0) & ~(byte)iVar144))) ==
                       0.0);
      auVar59._0_4_ =
           CONCAT13(~(byte)((uint)iVar105 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar105 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar105 >> 8),~(byte)iVar105)));
      param_3._0_4_ = auVar86._0_4_ * auVar160._0_4_;
      param_3._4_4_ = auVar86._4_4_ * auVar160._4_4_;
      param_3._8_4_ = auVar86._8_4_ * auVar160._8_4_;
      param_3._12_4_ = auVar86._12_4_ * auVar160._12_4_;
      auVar59._4_4_ = auVar59._0_4_;
      auVar59._8_4_ = auVar59._0_4_;
      auVar59._12_4_ = auVar59._0_4_;
      fVar38 = fVar38 * param_3._0_4_;
      fVar68 = fVar68 * param_3._4_4_;
      fVar184 = fVar184 * param_3._8_4_;
      fVar67 = fVar67 * param_3._12_4_;
      auVar30[0] = SUB41(fVar38,0) & ~(byte)iVar144;
      auVar30[1] = (byte)((uint)fVar38 >> 8) & ~bVar103;
      auVar30[2] = (byte)((uint)fVar38 >> 0x10) & ~bVar139;
      auVar30[3] = (byte)((uint)fVar38 >> 0x18) & ~bVar140;
      auVar30[4] = SUB41(fVar68,0) & ~(byte)iVar149;
      auVar30[5] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar149 >> 8);
      auVar30[6] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar149 >> 0x10);
      auVar30[7] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar149 >> 0x18);
      auVar30[8] = SUB41(fVar184,0) & ~(byte)iVar154;
      auVar30[9] = (byte)((uint)fVar184 >> 8) & ~(byte)((uint)iVar154 >> 8);
      auVar30[10] = (byte)((uint)fVar184 >> 0x10) & ~(byte)((uint)iVar154 >> 0x10);
      auVar30[0xb] = (byte)((uint)fVar184 >> 0x18) & ~(byte)((uint)iVar154 >> 0x18);
      auVar30[0xc] = SUB41(fVar67,0) & ~(byte)iVar158;
      auVar30[0xd] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar158 >> 8);
      auVar30[0xe] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar158 >> 0x10);
      auVar30[0xf] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar158 >> 0x18);
      auVar60 = auVar60 ^ (auVar60 ^ auVar30) & auVar59;
      local_70 = (double)param_4._8_4_;
      uStack_a8 = auVar60._8_8_;
      local_b0 = auVar60._0_8_;
      param_2._0_8_ = (double)fStack_bc;
      param_2._8_8_ = 0;
      dStack_78 = param_2._0_8_;
      FUN_030f5650(1.0 / param_1,lVar12,uVar208,&local_80,&local_b0,&local_90,local_a0);
      (**(code **)(**(long **)(param_5 + 0xd0) + 400))
                (*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),&local_90,local_a0,0);
      *(undefined8 *)(param_6 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_6 + 4));
      if (local_38 == (long *)0x0) goto LAB_02bd3f54;
      lVar12 = local_38[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar105 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar105;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02bd3f50:
      if (iVar105 != 0) goto LAB_02bd3f54;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      cVar3 = *(char *)(param_5 + 0x80);
    }
    if (cVar3 != '\0') goto LAB_02bd3f5c;
LAB_02bd45e0:
    cVar3 = *(char *)(param_5 + 0x281);
  }
joined_r0x02bd486c:
  if (cVar3 != '\0') {
    local_80 = (undefined8 *)0x0;
    dStack_78 = 0.0;
    FUN_008c4b3c(&local_80,param_5 + 0x68);
    FUN_00956dac(local_a0,&local_80);
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar105 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar105 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar105 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar105 = __cxa_guard_acquire(PTR_DAT_04379498), iVar105 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_90 = *puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_90);
      }
    }
    if (local_a0[0] != (long *)0x0) {
      (**(code **)(*local_a0[0] + 0x40))();
      auVar37._0_4_ = extraout_s0_03 * extraout_s0_03;
      auVar37._4_4_ = extraout_var_03 * extraout_var_03;
      auVar37._8_4_ = extraout_var_08 * extraout_var_08;
      auVar37._12_4_ = extraout_var_13 * extraout_var_13;
      auVar66._0_4_ = param_2._0_4_ * param_2._0_4_;
      auVar66._4_4_ = param_2._4_4_ * param_2._4_4_;
      auVar66._8_4_ = param_2._8_4_ * param_2._8_4_;
      auVar66._12_4_ = param_2._12_4_ * param_2._12_4_;
      *(undefined1 *)(param_5 + 0x282) = 1;
      auVar98._0_4_ = param_3._0_4_ * param_3._0_4_;
      auVar98._4_4_ = param_3._4_4_ * param_3._4_4_;
      auVar98._8_4_ = param_3._8_4_ * param_3._8_4_;
      auVar98._12_4_ = param_3._12_4_ * param_3._12_4_;
      auVar160 = NEON_ext(auVar37,auVar37,8,1);
      auVar188 = NEON_ext(auVar66,auVar66,8,1);
      auVar175 = NEON_ext(auVar98,auVar98,8,1);
      *(ulong *)(param_5 + 0x278) =
           (ulong)(uint)SQRT(auVar175._0_4_ + auVar98._0_4_ + auVar175._4_4_ + auVar98._4_4_);
      *(ulong *)(param_5 + 0x270) =
           CONCAT44(SQRT(auVar188._0_4_ + auVar66._0_4_ + auVar188._4_4_ + auVar66._4_4_),
                    SQRT(auVar160._0_4_ + auVar37._0_4_ + auVar160._4_4_ + auVar37._4_4_));
      if (local_a0[0] != (long *)0x0) {
        lVar12 = local_a0[0][0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar105 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar105 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar105 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_a0[0] + 0x20))();
          cVar3 = *(char *)(param_5 + 0x282);
          goto joined_r0x02bd4704;
        }
      }
    }
  }
  cVar3 = *(char *)(param_5 + 0x282);
joined_r0x02bd4704:
  if (cVar3 != '\0') {
    lVar12 = *(long *)(param_5 + 0x100);
    if (lVar12 != 0) {
      plVar10 = (long *)(lVar12 + 0x48);
      uVar14 = 0;
      do {
        uVar11 = uVar14;
        uVar14 = 0xffffffff;
        if (*(int *)(lVar12 + 0x50) <= (int)uVar11) goto LAB_02bd4748;
        uVar14 = uVar11 + 1;
      } while ((*(byte *)((long)plVar10 + (ulong)(uVar11 & 0xffff) * 0x40 + *plVar10 + 0x1e) & 1) !=
               0);
      uVar14 = uVar11;
LAB_02bd4748:
      auVar160 = *(undefined1 (*) [16])(param_5 + 0x270);
      auVar188 = NEON_ext(auVar160,auVar160,8,1);
      dStack_78 = (double)(ulong)auVar188._0_4_;
      local_80 = auVar160._0_8_;
      if (uVar14 != 0xffffffff) {
        lVar9 = lVar12;
        while( true ) {
          local_90 = CONCAT62(local_90._2_6_,(short)uVar14);
          FUN_02f706c8(lVar9,&local_90,1,0,&local_80);
          uVar11 = uVar14 + 1;
          do {
            uVar14 = uVar11;
            if (*(int *)(lVar12 + 0x50) <= (int)uVar14) goto LAB_02bd47c0;
            uVar11 = uVar14 + 1;
          } while ((*(byte *)((long)plVar10 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar10 + 0x1e) & 1
                   ) != 0);
          if (uVar14 + 1 == 0) break;
          lVar9 = *(long *)(param_5 + 0x100);
        }
      }
    }
LAB_02bd47c0:
    *(undefined1 *)(param_5 + 0x282) = 0;
  }
  return;
}


